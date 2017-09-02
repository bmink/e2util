#include <errno.h>
#include "e2convert.h"

const char      *e2c_osc_type_names[] = {
        "SubBeef [Kick]",
        "Lazy [Kick]",
        "Echoes [Kick]",
        "Lay [Kick]",
        "Hardstyle [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]",
        "Lazy [Kick]"
};



int
e2c_check_sysex(bstr_t *sysex)
{
	if(bstrempty(sysex))
		return -1;

	if(bstrlen(sysex) != E2CONV_SYSEX_SIZE)
		return -1;

	if(!bstrbeginswith(sysex, "PTST"))
		return -1;

	return 0;
}


int
e2c_convert_soundpatch(bstr_t *out, bstr_t *sysex, int partnr)
{
	unsigned char	*buf;
	e2_part_t	*part;
	e2_mfx_t	*mfx;

	if(out == NULL || bstrlen(sysex) != E2CONV_SYSEX_SIZE ||
	    partnr < 1 || partnr > E2CONV_MAXPART) {
		return EINVAL;
	}

	buf = (unsigned char *) bget(sysex);
	if(buf == NULL)
		return ENOEXEC;

	part = (e2_part_t *)
	    (buf + E2CONV_PART0_OFFSET + (partnr - 1) * E2CONV_PART_SIZE);

	mfx = (e2_mfx_t *) (buf + E2CONV_MFX_OFFSET);

	bprintf(out, "=== Part %d ===\n", partnr);
	bprintf(out, "Osc Type: (%d) %s\n", (part->ep_osc_type + 1),
	    e2c_get_osc_name(part->ep_osc_type + 1));


	return 0;
}


const char *
e2c_get_osc_name(int oscnr)
{

	if(oscnr < 0 || oscnr > E2CONV_OSC_TYPE_CNT)
		return "Unknown";
		
	return e2c_osc_type_names[oscnr];
}

