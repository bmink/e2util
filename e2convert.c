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
        "AmbEight [Clap]",		/* 116 */
        "DirtySouth [Clap]",		/* 117 */
        "PureNine [Clap]",		/* 118 */
        "Mixed [Clap]",			/* 119 */
        "Trap [Clap]",			/* 120 */
        "Small [Clap]",			/* 121 */
        "Clapper [Clap]",		/* 122 */
        "Doubler [Clap]",		/* 123 */
        "EastCoast [Clap]",		/* 124 */
        "LiteClap [Clap]",		/* 125 */
        "DDD1 [Clap]",			/* 126 */
        "Crispy [Clap]",		/* 127 */
        "B.Boy [Clap]",			/* 128 */
        "Crumbles [Clap]",		/* 129 */
        "FingerSnap [Clap]",		/* 130 */

        "NineClose1 [HiHat]",		/* 131 */
        "NineOpen1 [HiHat]",		/* 132 */
        "NineClose2 [HiHat]",		/* 133 */
        "NineOpen2 [HiHat]",		/* 134 */
        "EightClose1 [HiHat]",		/* 135 */
        "EightOpen1 [HiHat]",		/* 136 */
        "EightOpen2 [HiHat]",		/* 137 */
        "CompClose [HiHat]",		/* 138 */
        "CompOpen [HiHat]",		/* 139 */
        "EastClose [HiHat]",		/* 140 */
        "EastOpen [HiHat]",		/* 141 */
        "DDD1Close [HiHat]",		/* 142 */
        "DDD1Open [HiHat]",		/* 143 */
        "WarmClose [HiHat]",		/* 144 */
        "WarmOpen [HiHat]",		/* 145 */
        "ZeeClose [HiHat]",		/* 146 */
        "ZeeOpen [HiHat]",		/* 147 */
        "RoomyClose [HiHat]",		/* 148 */
        "RoomyOpen [HiHat]",		/* 149 */
        "RockClose [HiHat]",		/* 150 */
        "RockOpen [HiHat]",		/* 151 */
        "JazzClose [HiHat]",		/* 152 */
        "JazzOpen [HiHat]",		/* 153 */
        "HoppyClose [HiHat]",		/* 154 */
        "HoppyOpen [HiHat]",		/* 155 */
        "PhaseClose [HiHat]",		/* 156 */
        "PhaseOpen [HiHat]",		/* 157 */
        "NuHopClose [HiHat]",		/* 158 */
        "NuHopOpen [HiHat]",		/* 159 */
        "RightClose [HiHat]",		/* 160 */
        "RightOpen [HiHat]",		/* 161 */
        "NoizClose [HiHat]",		/* 162 */
        "NoizOpen [HiHat]",		/* 163 */
        "GranClose [HiHat]",		/* 164 */
        "GranOpen [HiHat]",		/* 165 */
        "Ambi [HiHat]",			/* 166 */
        "Crackle [HiHat]",		/* 167 */
        "Hippy [HiHat]",		/* 168 */
        "Pump [HiHat]",			/* 169 */
        "Voice1 [HiHat]",		/* 170 */
        "Voice2 [HiHat]",		/* 171 */
        "Reverse [HiHat]",		/* 172 */

        "NineCym [Cymbal]",		/* 173 */
        "HiCymbal [Cymbal]",		/* 174 */
        "DoncaMatic [Cymbal]",		/* 175 */
        "EastCoast [Cymbal]",		/* 176 */
        "Rock [Cymbal]",		/* 177 */
        "Synth [Cymbal]",		/* 178 */
        "WhiteNoiz [Cymbal]",		/* 179 */
        "RevCrash [Cymbal]",		/* 180 */
        "NineRide [Cymbal]",		/* 181 */
        "JazzRide1 [Cymbal]",		/* 182 */
        "JazzRide2 [Cymbal]",		/* 183 */
        "RockRide [Cymbal]",		/* 184 */
        "ZeeRide [Cymbal]",		/* 185 */
        "RevRide [Cymbal]",		/* 186 */

        "Real Hi [Tom]",		/* 187 */
        "Real MidHi [Tom]",		/* 188 */
        "Real MidLo [Tom]",		/* 189 */
        "Real Lo [Tom]",		/* 190 */
        "Driven [Tom]",			/* 191 */
        "Zee Hi [Tom]",			/* 192 */
        "Zee Lo [Tom]",			/* 193 */
        "OldSkool [Tom]",		/* 194 */
        "Crunchy [Tom]",		/* 195 */
        "E.Tom [Tom]",			/* 196 */
        "Synth Hi1 [Tom]",		/* 197 */
        "Synth Mid1 [Tom]",		/* 198 */
        "Synth Lo1 [Tom]",		/* 199 */
        "Synth Hi2 [Tom]",		/* 200 */
        "Synth Lo2 [Tom]",		/* 201 */
        "TomEight [Tom]",		/* 202 */

        " [Perc.]",		/* 203 */
        " [Perc.]",		/* 204 */
        " [Perc.]",		/* 205 */
        " [Perc.]",		/* 206 */
        " [Perc.]",		/* 207 */
        " [Perc.]",		/* 208 */
        " [Perc.]",		/* 209 */
        " [Perc.]",		/* 210 */
        " [Perc.]",		/* 211 */
        " [Perc.]",		/* 212 */
        " [Perc.]",		/* 213 */
        " [Perc.]",		/* 214 */
        " [Perc.]",		/* 215 */
        " [Perc.]",		/* 216 */
        " [Perc.]",		/* 217 */
        " [Perc.]",		/* 218 */
        " [Perc.]",		/* 219 */
        " [Perc.]",		/* 220 */
        " [Perc.]",		/* 221 */
        " [Perc.]",		/* 222 */
        " [Perc.]",		/* 223 */
        " [Perc.]",		/* 224 */
        " [Perc.]",		/* 225 */
        " [Perc.]",		/* 226 */
        " [Perc.]",		/* 227 */
        " [Perc.]",		/* 228 */
        " [Perc.]",		/* 229 */
        " [Perc.]",		/* 230 */
        " [Perc.]",		/* 231 */
        " [Perc.]",		/* 232 */
        " [Perc.]",		/* 233 */
        " [Perc.]",		/* 234 */
        " [Perc.]",		/* 235 */
        " [Perc.]",		/* 236 */
        " [Perc.]",		/* 237 */
        " [Perc.]",		/* 238 */
        " [Perc.]",		/* 239 */
        " [Perc.]",		/* 240 */
        " [Perc.]",		/* 241 */
        " [Perc.]",		/* 242 */
        " [Perc.]",		/* 243 */
        " [Perc.]",		/* 244 */
        " [Perc.]",		/* 245 */
        " [Perc.]",		/* 246 */
        " [Perc.]",		/* 247 */
        " [Perc.]",		/* 248 */
        " [Perc.]",		/* 249 */
        " [Perc.]",		/* 250 */
        " [Perc.]",		/* 251 */
        " [Perc.]",		/* 252 */
        " [Perc.]",		/* 253 */
        " [Perc.]",		/* 254 */
        " [Perc.]",		/* 255 */
        " [Perc.]",		/* 256 */
        " [Perc.]",		/* 257 */

        " [Voice]",		/* 258 */
        " [Voice]",		/* 259 */
        " [Voice]",		/* 260 */
        " [Voice]",		/* 261 */
        " [Voice]",		/* 262 */
        " [Voice]",		/* 263 */
        " [Voice]",		/* 264 */
        " [Voice]",		/* 265 */
        " [Voice]",		/* 266 */
        " [Voice]",		/* 267 */
        " [Voice]",		/* 268 */
        " [Voice]",		/* 269 */
        " [Voice]",		/* 270 */
        " [Voice]",		/* 271 */
        " [Voice]",		/* 272 */
        " [Voice]",		/* 273 */

        " [Synth Fx]",		/* 274 */
        " [Synth Fx]",		/* 275 */
        " [Synth Fx]",		/* 276 */
        " [Synth Fx]",		/* 277 */
        " [Synth Fx]",		/* 278 */
        " [Synth Fx]",		/* 279 */
        " [Synth Fx]",		/* 280 */
        " [Synth Fx]",		/* 281 */
        " [Synth Fx]",		/* 282 */
        " [Synth Fx]",		/* 283 */
        " [Synth Fx]",		/* 284 */
        " [Synth Fx]",		/* 285 */
        " [Synth Fx]",		/* 286 */
        " [Synth Fx]",		/* 287 */
        " [Synth Fx]",		/* 288 */
        " [Synth Fx]",		/* 289 */
        " [Synth Fx]",		/* 290 */
        " [Synth Fx]",		/* 291 */

        " [Synth Hit]",		/* 292 */
        " [Synth Hit]",		/* 293 */
        " [Synth Hit]",		/* 294 */
        " [Synth Hit]",		/* 295 */
        " [Synth Hit]",		/* 296 */
        " [Synth Hit]",		/* 297 */
        " [Synth Hit]",		/* 298 */
        " [Synth Hit]",		/* 299 */
        " [Synth Hit]",		/* 300 */
        " [Synth Hit]",		/* 301 */
        " [Synth Hit]",		/* 302 */
        " [Synth Hit]",		/* 303 */
        " [Synth Hit]",		/* 304 */
        " [Synth Hit]",		/* 305 */
        " [Synth Hit]",		/* 306 */
        " [Synth Hit]",		/* 307 */
        " [Synth Hit]",		/* 308 */
        " [Synth Hit]",		/* 309 */

        " [Inst.Hit]",		/* 310 */
        " [Inst.Hit]",		/* 311 */
        " [Inst.Hit]",		/* 312 */
        " [Inst.Hit]",		/* 313 */
        " [Inst.Hit]",		/* 314 */
        " [Inst.Hit]",		/* 315 */
        " [Inst.Hit]",		/* 316 */
        " [Inst.Hit]",		/* 317 */
        " [Inst.Hit]",		/* 318 */
        " [Inst.Hit]",		/* 319 */
        " [Inst.Hit]",		/* 320 */
        " [Inst.Hit]",		/* 321 */
        " [Inst.Hit]",		/* 322 */
        " [Inst.Hit]",		/* 323 */
        " [Inst.Hit]",		/* 324 */
        " [Inst.Hit]",		/* 325 */

        " [Synth]",		/* 326 */
        " [Synth]",		/* 327 */
        " [Synth]",		/* 328 */
        " [Synth]",		/* 329 */
        " [Synth]",		/* 330 */
        " [Synth]",		/* 331 */
        " [Synth]",		/* 332 */
        " [Synth]",		/* 333 */
        " [Synth]",		/* 334 */
        " [Synth]",		/* 335 */
        " [Synth]",		/* 336 */
        " [Synth]",		/* 337 */
        " [Synth]",		/* 338 */
        " [Synth]",		/* 339 */
        " [Synth]",		/* 340 */
        " [Synth]",		/* 341 */
        " [Synth]",		/* 342 */
        " [Synth]",		/* 343 */
        " [Synth]",		/* 344 */
        " [Synth]",		/* 345 */
        " [Synth]",		/* 346 */
        " [Synth]",		/* 347 */
        " [Synth]",		/* 348 */
        " [Synth]",		/* 349 */
        " [Synth]",		/* 350 */
        " [Synth]",		/* 351 */
        " [Synth]",		/* 352 */
        " [Synth]",		/* 353 */
        " [Synth]",		/* 354 */
        " [Synth]",		/* 355 */
        " [Synth]",		/* 356 */
        " [Synth]",		/* 357 */
        " [Synth]",		/* 358 */
        " [Synth]",		/* 359 */
        " [Synth]",		/* 360 */
        " [Synth]",		/* 361 */
        " [Synth]",		/* 362 */
        " [Synth]",		/* 363 */
        " [Synth]",		/* 364 */
        " [Synth]",		/* 365 */
        " [Synth]",		/* 366 */
        " [Synth]",		/* 367 */
        " [Synth]",		/* 368 */
        " [Synth]",		/* 369 */
        " [Synth]",		/* 370 */
        " [Synth]",		/* 371 */
        " [Synth]",		/* 372 */
        " [Synth]",		/* 373 */
        " [Synth]",		/* 374 */
        " [Synth]",		/* 375 */
        " [Synth]",		/* 376 */
        " [Synth]",		/* 377 */
        " [Synth]",		/* 378 */
        " [Synth]",		/* 379 */
        " [Synth]",		/* 380 */

        " [Instrument]",		/* 381 */
        " [Instrument]",		/* 382 */
        " [Instrument]",		/* 383 */
        " [Instrument]",		/* 384 */
        " [Instrument]",		/* 385 */
        " [Instrument]",		/* 386 */
        " [Instrument]",		/* 387 */
        " [Instrument]",		/* 388 */
        " [Instrument]",		/* 389 */
        " [Instrument]",		/* 390 */
        " [Instrument]",		/* 391 */
        " [Instrument]",		/* 392 */
        " [Instrument]",		/* 393 */
        " [Instrument]",		/* 394 */
        " [Instrument]",		/* 395 */
        " [Instrument]",		/* 396 */
        " [Instrument]",		/* 397 */
        " [Instrument]",		/* 398 */
        " [Instrument]",		/* 399 */
        " [Instrument]",		/* 400 */
        " [Instrument]",		/* 401 */
        " [Instrument]",		/* 402 */
        " [Instrument]",		/* 403 */
        " [Instrument]",		/* 404 */
        " [Instrument]",		/* 405 */
        " [Instrument]",		/* 406 */
        " [Instrument]",		/* 407 */
        " [Instrument]",		/* 408 */
        "Audio In [Audio In]",	/* 409 */

	NULL
};

const char      *e2c_mute_names[] = {
        "Off",			/* 0 */
        "On",			/* 1 */
	NULL
};

const char      *e2c_voice_assign_names[] = {
        "Mono1",		/* 0 */
        "Mono2",		/* 1 */
        "Poly1",		/* 2 */
        "Poly2",		/* 3 */
	NULL
};

const char      *e2c_motion_sequence_names[] = {
        "Off",			/* 0 */
        "Smooth",		/* 1 */
        "TriggerHold",		/* 2 */
	NULL
};

const char      *e2c_tp_velocity_names[] = {
        "Off",			/* 0 */
        "On",			/* 1 */
	NULL
};

const char      *e2c_scale_mode_names[] = {
        "Off",			/* 0 */
        "On",			/* 1 */
	NULL
};

const char      *e2c_part_pri_names[] = {
        "Normal",		/* 0 */
        "High",			/* 1 */
	NULL
};

const char      *e2c_filt_type_names[] = {
        "Off",			/* 0 */
        "Electribe LPF",	/* 1 */
        "MS20 LPF",		/* 2 */
        "MG LPF",		/* 3 */
        "P5 LPF",		/* 4 */
        "OB LPF",		/* 5 */
        "Acid LPF",		/* 6 */
	NULL
};

const char      *e2c_mod_type_names[] = {
	NULL
};

const char      *e2c_eg_on_names[] = {
        "Off",			/* 0 */
        "On",			/* 1 */
	NULL
};

const char      *e2c_groove_type_names[] = {
	NULL
};

const char      *e2c_ifx_on_names[] = {
        "Off",			/* 0 */
        "On",			/* 1 */
	NULL
};

const char      *e2c_ifx_type_names[] = {
	NULL
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
	bprintf(out, "Osc Type: |%d| %s\n", (part->ep_osc_type + 1),
	    e2c_get_name(e2c_osc_type_names, part->ep_osc_type + 1));
	bprintf(out, "Osc Edit: |%d|\n", part->ep_osc_edit);
	bprintf(out, "Mute: |%d| %s\n", part->ep_mute,
	    e2c_get_name(e2c_mute_names, part->ep_mute));
	bprintf(out, "Voice Assign: |%d| %s\n", part->ep_voice_assign,
	    e2c_get_name(e2c_voice_assign_names, part->ep_voice_assign));
	bprintf(out, "Motion Sequence: |%d| %s\n", part->ep_motion_sequence,
	    e2c_get_name(e2c_motion_sequence_names, part->ep_motion_sequence));
	bprintf(out, "Trigger Pad Velocity: |%d| %s\n",
	    part->ep_tp_velocity,
	    e2c_get_name(e2c_tp_velocity_names, part->ep_tp_velocity));
	bprintf(out, "Scale Mode: |%d| %s\n", part->ep_scale_mode,
	    e2c_get_name(e2c_scale_mode_names, part->ep_scale_mode));
	bprintf(out, "Part Priority: |%d| %s\n", part->ep_part_pri,
	    e2c_get_name(e2c_part_pri_names, part->ep_part_pri));
	bprintf(out, "\n", partnr);
	bprintf(out, "Filter Type: |%d| %s\n", part->ep_filt_type,
	    e2c_get_name(e2c_filt_type_names, part->ep_filt_type));
	bprintf(out, "Filter Cutoff: |%d|\n", part->ep_filt_cutoff);
	bprintf(out, "Filter Resonance: |%d|\n", part->ep_filt_res);
	bprintf(out, "Filter EG Int: |%d|\n", part->ep_filt_egint);
	bprintf(out, "\n", partnr);
	bprintf(out, "Mod Type: |%d| %s\n", part->ep_mod_type,
	    e2c_get_name(e2c_mod_type_names, part->ep_mod_type));
	bprintf(out, " Mod Speed: |%d|\n", part->ep_mod_speed);
	bprintf(out, " Mod Depth: |%d|\n", part->ep_mod_depth);
	bprintf(out, "\n", partnr);
	bprintf(out, "EG: |%d| %s\n", part->ep_eg_on,
	    e2c_get_name(e2c_eg_on_names, part->ep_eg_on));
	if(part->ep_eg_on) {
		bprintf(out, " EG Attack: |%d|\n", part->ep_eg_attack);
		bprintf(out, " EG Decay/Release: |%d|\n",
		    part->ep_eg_decayrel);
	}

	bprintf(out, "Amp Level: |%d|\n", part->ep_amp_level);
	bprintf(out, "Amp Pan: ");
	if(part->ep_amp_pan == 0)
		bprintf(out, "Center");
	bprintf(out, "\n");

	bprintf(out, "\n");
	bprintf(out, "Groove Type: |%d| %s\n", part->ep_groove_type,
	    e2c_get_name(e2c_groove_type_names, part->ep_groove_type));
	bprintf(out, "Groove Depth: |%d|\n", part->ep_groove_depth);


	bprintf(out, "\n");
	bprintf(out, "IFX: |%d| %s\n", part->ep_ifx_on,
	    e2c_get_name(e2c_ifx_on_names, part->ep_ifx_on));
	if(part->ep_ifx_on) {
		bprintf(out, " IFX Type: |%d| %s\n", part->ep_ifx_type,
		    e2c_get_name(e2c_ifx_type_names, part->ep_ifx_type));
		bprintf(out, " IFX Edit: |%d|\n", part->ep_ifx_edit);
	}
		


	bprintf(out, "\n", partnr);
	bprintf(out, "Last Step: |%d|\n", part->ep_last_step);

	return 0;
}


const char *
e2c_get_name(const char **name_table, int nr)
{
	const char	**cur;
	int		i;

	if(nr < 0)
		return "Unknown";

	i = 0;
	for(cur = name_table; *cur != NULL; ++cur) {
		if(i == nr)
			return *cur;
		++i;
	}

	return "Unknown";
}

