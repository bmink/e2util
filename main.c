#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bstr.h"
#include "e2convert.h"

void
usage(char *prognam)
{
	printf("\n");
	printf("Usage %s <command> [param1, param2, ...]\n", prognam);
	printf("\n");
	printf("Commands:\n");
	printf("\tsoundpatch <partnr>: Display the specified part's"
	    " sound parameters, along with relevant global setting.\n");
	printf("\n");
}


#define E2TXT_CMD_NONE		0
#define E2TXT_CMD_SOUNDPATCH	1

int
main(int argc, char **argv)
{
	char	*prognam;
	char	*cmdstr;
	int	cmd;
	int	partnr;
	bstr_t	*sysex;
	int	ret;
	bstr_t	*outp;

	sysex = NULL;
	outp = NULL;

	prognam = argv[0];
	cmd = E2TXT_CMD_NONE;

	if(argc < 2) {
		usage(prognam);
		exit(-1);
	}

	cmdstr = argv[1];
	if(xstrempty(cmdstr)) {
		fprintf(stderr, "No or invalid command\n");
		exit(-1);
	}

	if(!xstrcmp(cmdstr, "soundpatch")) {
		if(argc != 3 || xstrempty(argv[2])) {
			usage(prognam);
			exit(-1);
		}
		partnr = xatoi(argv[2]);
		if(partnr < 1 || partnr > E2CONV_MAXPART) {
			fprintf(stderr, "Invalid part specified.\n");
			exit(-1);
		}
		cmd = E2TXT_CMD_SOUNDPATCH;
	} else {
		fprintf(stderr, "Unknown command \"%s\"\n", cmdstr);
		exit(-1);
	}
	
	/* Read sysex data. */
	sysex = binit();
	if(sysex == NULL) {
		fprintf(stderr, "Couldn't allocate bstr for sysex data.\n");
		exit(-1);
	}

	ret = bfromfilep(sysex, stdin);
	if(ret != 0) {
		fprintf(stderr, "Couldn't read sysex data: %s.\n",
		    strerror(ret));
		buninit(&sysex);
		exit(-1);
	}

	ret = e2c_check_sysex(sysex);
	if(ret != 0) {
		fprintf(stderr, "Sysex data invalid or incomplete.\n");
		buninit(&sysex);
		exit(-1);
	}

	/* Execute command. */
	outp = binit();
	if(sysex == NULL) {
		fprintf(stderr, "Couldn't allocate bstr for output data.\n");
		buninit(&sysex);
		exit(-1);
	}

	switch(cmd) {
	case E2TXT_CMD_SOUNDPATCH:
		ret = e2c_convert_soundpatch(outp, sysex, partnr);
		if(ret != 0) {
			fprintf(stderr, "Couldn't convert soundpatch.\n");
		}
		btofilep(stdout, outp);
		break;
	}



	buninit(&outp);
	buninit(&sysex);

	return 0;
}
