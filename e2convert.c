#include <errno.h>
#include "e2convert.h"


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

	if(bstrempty(out) || bstrempty(sysex) ||
	    partnr < 1 || partnr > E2CONV_MAXPART) {
		return EINVAL;
	}


	

	return 0;

}


