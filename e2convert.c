#include <errno.h>
#include "e2convert.h"

const char      *e2c_osc_type_names[] = {
        "SubBeef [Kick]",		/* 001 */
        "Lazy [Kick]",			/* 002 */
        "Echoes [Kick]",		/* 003 */
        "Lay [Kick]",			/* 004 */
        "Hardstyle [Kick]",		/* 005 */
        "Hardcore [Kick]",		/* 006 */
        "Southpaw [Kick]",		/* 007 */
        "8BitGrime [Kick]",		/* 008 */
        "Noiz [Kick]",			/* 009 */
        "HiKnock [Kick]",		/* 010 */
        "LoKnock [Kick]",		/* 011 */
        "Tronica [Kick]",		/* 012 */
        "HiClicky [Kick]",		/* 013 */
        "LoClicky [Kick]",		/* 014 */
        "Subsonic [Kick]",		/* 015 */
        "Threed [Kick]",		/* 016 */
        "Lololow [Kick]",		/* 017 */
        "Risky [Kick]",			/* 018 */
        "ShortBoom [Kick]",		/* 019 */
        "AttackEight [Kick]",		/* 020 */
        "PureEight [Kick]",		/* 021 */
        "UltraEight [Kick]",		/* 022 */
        "SnipEight [Kick]",		/* 023 */
        "ShortNine [Kick]",		/* 024 */
        "PureNine [Kick]",		/* 025 */
        "BoostNine [Kick]",		/* 026 */
        "Harder [Kick]",		/* 027 */
        "BitBreak [Kick]",		/* 028 */
        "Finger [Kick]",		/* 029 */
        "Filthy [Kick]",		/* 030 */
        "Visual [Kick]",		/* 031 */
        "Breaker [Kick]",		/* 032 */
        "Urban [Kick]",			/* 033 */
        "Roomy [Kick]",			/* 034 */
        "Studio [Kick]",		/* 035 */
        "Twinkling [Kick]",		/* 036 */
        "Hippy [Kick]",			/* 037 */
        "Ringy [Kick]",			/* 038 */
        "Womp [Kick]",			/* 039 */
        "Hip [Kick]",			/* 040 */
        "Jungle [Kick]",		/* 041 */
        "EastCoast [Kick]",		/* 042 */
        "Jazz [Kick]",			/* 043 */
        "Rock [Kick]",			/* 044 */
        "Warm [Kick]",			/* 045 */
        "Breaks [Kick]",		/* 046 */
        "80'sR&B1 [Kick]",		/* 047 */
        "80'sR&B2 [Kick]",		/* 048 */
        "80'sR&B3 [Kick]",		/* 049 */
        "DDD1 [Kick]",			/* 050 */
        "DoncaMatic [Kick]",		/* 051 */
        "BeatVox1 [Kick]",		/* 052 */
        "BeatVox2 [Kick]",		/* 053 */
        "BeatVox3 [Kick]",		/* 054 */
        "Reverse1 [Kick]",		/* 055 */
        "Reverse2 [Kick]",		/* 056 */
        "Aftertaste [Snare]",		/* 057 */
        "Sharp [Snare]",		/* 058 */
        "Toofer [Snare]",		/* 059 */
        "Clpsnr [Snare]",		/* 060 */
        "Bosh [Snare]",			/* 061 */
        "Wide [Snare]",			/* 062 */
        "BreaksLofi [Snare]",		/* 063 */
        "Beach [Snare]",		/* 064 */
        "Hefty [Snare]",		/* 065 */
        "Goodie [Snare]",		/* 066 */
        "Steady [Snare]",		/* 067 */
        "Tech [Snare]",			/* 068 */
        "Lay [Snare]",			/* 069 */
        "LoNine [Snare]",		/* 070 */
        "HiNine [Snare]",		/* 071 */
        "CompNine [Snare]",		/* 072 */
        "PureEight [Snare]",		/* 073 */
        "BodyEight [Snare]",		/* 074 */
        "TrapEight [Snare]",		/* 075 */
        "Shortate [Snare]",		/* 076 */
        "LeanSnare [Snare]",		/* 077 */
        "Seventy [Snare]",		/* 078 */
        "DDD1 [Snare]",			/* 079 */
        "Nuxx [Snare]",			/* 080 */
        "Oldie [Snare]",		/* 081 */
        "Bigger [Snare]",		/* 082 */
        "80'sR&B1 [Snare]",		/* 083 */
        "80'sR&B2 [Snare]",		/* 084 */
        "Jazz1 [Snare]",		/* 085 */
        "Jazz2 [Snare]",		/* 086 */
        "Snappy [Snare]",		/* 087 */
        "Ambee [Snare]",		/* 088 */
        "Verdy [Snare]",		/* 089 */
        "Tubeverb [Snare]",		/* 090 */
        "Open1 [Snare]",		/* 091 */
        "Open2 [Snare]",		/* 092 */
        "Oldskool [Snare]",		/* 093 */
        "Hoppy [Snare]",		/* 094 */
        "Ringy [Snare]",		/* 095 */
        "OldBreaks [Snare]",		/* 096 */
        "Piccolo [Snare]",		/* 097 */
	"Jungla [Snare]",		/* 098 */
	"EastCoast [Snare]",		/* 099 */
        "D'n'B [Snare]",		/* 100 */
        "Ambig [Snare]",		/* 101 */
        "Juggler [Snare]",		/* 102 */
        "DoncaMatic [Snare]",		/* 103 */
        "Whip [Snare]",			/* 104 */
        "Arcade [Snare]",		/* 105 */
        "RimVox [Snare]",		/* 106 */
        "Parched [Snare]",		/* 107 */
        "Rimmy [Snare]",		/* 108 */
        "AmbiRim [Snare]",		/* 109 */
        "SnareVox [Snare]",		/* 110 */
        "Waffle [Snare]",		/* 111 */
        "Blast [Snare]",		/* 112 */
        "Reverse1 [Snare]",		/* 113 */
        "Reverse2 [Snare]",		/* 114 */
        "PureEight [Clap]",		/* 115 */



        "Lazy [Kick]"			/* 002 */
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

