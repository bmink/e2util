#include <errno.h>
#include "e2convert.h"

const char	*e2c_osc_type_names[] = {
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

        "Conga1 [Perc.]",		/* 203 */
        "Conga2 [Perc.]",		/* 204 */
        "Conga3 [Perc.]",		/* 205 */
        "Conga4 [Perc.]",		/* 206 */
        "Conga5 [Perc.]",		/* 207 */
        "Bongo1 [Perc.]",		/* 208 */
        "Bongo2 [Perc.]",		/* 209 */
        "Bongo3 [Perc.]",		/* 210 */
        "Bongo4 [Perc.]",		/* 211 */
        "Bongo5 [Perc.]",		/* 212 */
        "Bongo6 [Perc.]",		/* 213 */
        "Djembe1 [Perc.]",		/* 214 */
        "Djembe2 [Perc.]",		/* 215 */
        "Djembe3 [Perc.]",		/* 216 */
        "Djembe4 [Perc.]",		/* 217 */
        "Darbuka1 [Perc.]",		/* 218 */
        "Darbuka2 [Perc.]",		/* 219 */
        "Darbuka3 [Perc.]",		/* 220 */
        "Darbuka4 [Perc.]",		/* 221 */
        "Timbales Hi [Perc.]",		/* 222 */
        "Timbales Lo [Perc.]",		/* 223 */
        "CowBell1 [Perc.]",		/* 224 */
        "CowBell2 [Perc.]",		/* 225 */
        "CowBell3 [Perc.]",		/* 226 */
        "Tambourine1 [Perc.]",		/* 227 */
        "Tambourine2 [Perc.]",		/* 228 */
        "Clave [Perc.]",		/* 229 */
        "Guiro [Perc.]",		/* 230 */
        "Cabasa [Perc.]",		/* 231 */
        "Shaker [Perc.]",		/* 232 */
        "WaveDrum1 [Perc.]",		/* 233 */
        "WaveDrum2 [Perc.]",		/* 234 */
        "WaveDrum3 [Perc.]",		/* 235 */
        "WaveDrum4 [Perc.]",		/* 236 */
        "WaveDrum5 [Perc.]",		/* 237 */
        "WaveDrum6 [Perc.]",		/* 238 */
        "WaveDrum7 [Perc.]",		/* 239 */
        "WaveDrum8 [Perc.]",		/* 240 */
        "ShakerHit [Perc.]",		/* 241 */
        "RimPerc [Perc.]",		/* 242 */
        "Wavestation [Perc.]",		/* 243 */
        "RimNine [Perc.]",		/* 244 */
        "RimEight [Perc.]",		/* 245 */
        "SynthShake [Perc.]",		/* 246 */
        "CowbellEight [Perc.]",		/* 247 */
        "DoncaCongaS [Perc.]",		/* 248 */
        "DoncaCongaL [Perc.]",		/* 249 */
        "DoncaMaracas [Perc.]",		/* 250 */
        "DoncaClaves [Perc.]",		/* 251 */
        "DoncaW.block [Perc.]",		/* 252 */
        "Synthclave [Perc.]",		/* 253 */
        "ClickRoll [Perc.]",		/* 254 */
        "GlitchDmg [Perc.]",		/* 255 */
        "MouthPop [Perc.]",		/* 256 */
        "Droplet [Perc.]",		/* 257 */

        "Rave [Voice]",			/* 258 */
        "Whoo [Voice]",			/* 259 */
        "Ohooo [Voice]",		/* 260 */
        "ComOn [Voice]",		/* 261 */
        "Nahh [Voice]",			/* 262 */
        "Ahaa.. [Voice]",		/* 263 */
        "Haa [Voice]",			/* 264 */
        "Baaa [Voice]",			/* 265 */
        "Grun [Voice]",			/* 266 */
        "Ahaaw [Voice]",		/* 267 */
        "Paa [Voice]",			/* 268 */
        "Hey [Voice]",			/* 269 */
        "Doh [Voice]",			/* 270 */
        "GlitchEey [Voice]",		/* 271 */
        "BotVox1 [Voice]",		/* 272 */
        "BotVox2 [Voice]",		/* 273 */

        "NoizyVox [Synth Fx]",		/* 274 */
        "Noiser [Synth Fx]",		/* 275 */
        "Botox [Synth Fx]",		/* 276 */
        "ShockSonar [Synth Fx]",	/* 277 */
        "Quark [Synth Fx]",		/* 278 */
        "ebPerc [Synth Fx]",		/* 279 */
        "Needle [Synth Fx]",		/* 280 */
        "SqueakyBum [Synth Fx]",	/* 281 */
        "SynSiren [Synth Fx]",		/* 282 */
        "Bubble [Synth Fx]",		/* 283 */
        "Burp [Synth Fx]",		/* 284 */
        "Lux [Synth Fx]",		/* 285 */
        "Squirt [Synth Fx]",		/* 286 */
        "Degraded [Synth Fx]",		/* 287 */
        "Flyby [Synth Fx]",		/* 288 */
        "SonicDrop [Synth Fx]",		/* 289 */
        "LoZap [Synth Fx]",		/* 290 */
        "SubBang [Synth Fx]",		/* 291 */

        "Stabium [Synth Hit]",		/* 292 */
        "Futurize [Synth Hit]",		/* 293 */
        "LilChord [Synth Hit]",		/* 294 */
        "Ploinky [Synth Hit]",		/* 295 */
        "Strippa [Synth Hit]",		/* 296 */
        "BigChords [Synth Hit]",	/* 297 */
        "StarBurst [Synth Hit]",	/* 298 */
        "WishWash [Synth Hit]",		/* 299 */
        "BangPop [Synth Hit]",		/* 300 */
        "RegulatePop [Synth Hit]",	/* 301 */
        "TigerPad [Synth Hit]",		/* 302 */
        "LofiSynth [Synth Hit]",	/* 303 */
        "BlastBass [Synth Hit]",	/* 304 */
        "BenderBass [Synth Hit]",	/* 305 */
        "RockHit1 [Synth Hit]",		/* 306 */
        "RockHit2 [Synth Hit]",		/* 307 */
        "FormantBass [Synth Hit]",	/* 308 */
        "SynGrowl [Synth Hit]",		/* 309 */

        "BrassHit1 [Inst.Hit]",		/* 310 */
        "BrassHit2 [Inst.Hit]",		/* 311 */
        "StringsHit1 [Inst.Hit]",	/* 312 */
        "StringsHit2 [Inst.Hit]",	/* 313 */
        "BadOrch [Inst.Hit]",		/* 314 */
        "CarmOrch [Inst.Hit]",		/* 315 */
        "Sho2DOrch [Inst.Hit]",		/* 316 */
        "V2Orch [Inst.Hit]",		/* 317 */
        "Suspended [Inst.Hit]",		/* 318 */
        "Jazz [Inst.Hit]",		/* 319 */
        "Jazzy [Inst.Hit]",		/* 320 */
        "Hop [Inst.Hit]",		/* 321 */
        "OldBrass [Inst.Hit]",		/* 322 */
        "Record [Inst.Hit]",		/* 323 */
        "Rave [Inst.Hit]",		/* 324 */
        "Oldie [Inst.Hit]",		/* 325 */

        "SAW [Synth]",			/* 326 */
        "BOOST-SAW [Synth]",		/* 327 */
        "PULSE [Synth]",		/* 328 */
        "TRIANGLE [Synth]",		/* 329 */
        "SINE [Synth]",			/* 330 */
        "DUAL-SAW [Synth]",		/* 331 */
        "DUAL-SQU [Synth]",		/* 332 */
        "DUAL-TRI [Synth]",		/* 333 */
        "DUAL-SINE [Synth]",		/* 334 */
        "OCT-SAW [Synth]",		/* 335 */
        "OCT-SQU [Synth]",		/* 336 */
        "OCT-TRI [Synth]",		/* 337 */
        "OCT-SINE [Synth]",		/* 338 */
        "UNI-SAW [Synth]",		/* 339 */
        "UNI-SQU [Synth]",		/* 340 */
        "UNI-TRI [Synth]",		/* 341 */
        "UNI-SINE [Synth]",		/* 342 */
        "SYNC-SAW [Synth]",		/* 343 */
        "SYNC-SQU [Synth]",		/* 344 */
        "SYNC-TRI [Synth]",		/* 345 */
        "SYNC-SINE [Synth]",		/* 346 */
        "CHIP-TRI 1 [Synth]",		/* 347 */
        "CHIP-TRI 2 [Synth]",		/* 348 */
        "CHIP-PULSE [Synth]",		/* 349 */
        "CHIP-NOISE [Synth]",		/* 350 */
        "RING-SAW [Synth]",		/* 351 */
        "RING-SQU [Synth]",		/* 352 */
        "RING-TRI [Synth]",		/* 353 */
        "RING-SINE [Synth]",		/* 354 */
        "X-SAW 1 [Synth]",		/* 355 */
        "X-SAW 2 [Synth]",		/* 356 */
        "X-SQUARE 1 [Synth]",		/* 357 */
        "X-SQUARE 2 [Synth]",		/* 358 */
        "X-TRI 1 [Synth]",		/* 359 */
        "X-TRI 2 [Synth]",		/* 360 */
        "X-SINE 1 [Synth]",		/* 361 */
        "X-SINE 2 [Synth]",		/* 362 */
        "VPM-SAW [Synth]",		/* 363 */
        "VPM-SQUARE [Synth]",		/* 364 */
        "VPM-TRI [Synth]",		/* 365 */
        "VPM-SINE 1 [Synth]",		/* 366 */
        "VPM-SINE 2 [Synth]",		/* 367 */
        "VPM-SINE 3 [Synth]",		/* 368 */
        "VPM-SINE 4 [Synth]",		/* 369 */
        "SYN-SINE 1 [Synth]",		/* 370 */
        "SYN-SINE 2 [Synth]",		/* 371 */
        "SYN-SINE 3 [Synth]",		/* 372 */
        "SYN-SINE 4 [Synth]",		/* 373 */
        "SYN-SINE 5 [Synth]",		/* 374 */
        "SYN-SINE 6 [Synth]",		/* 375 */
        "SYN-SINE 7 [Synth]",		/* 376 */
        "HPF NOISE [Synth]",		/* 377 */
        "LPF NOISE [Synth]",		/* 378 */
        "LOFI NOISE [Synth]",		/* 379 */
        "RES NOISE [Synth]",		/* 380 */

        "M1 Piano [Instrument]",	/* 381 */
        "E.P.Roads [Instrument]",	/* 382 */
        "E.P.Wurly [Instrument]",	/* 383 */
        "Clav [Instrument]",		/* 384 */
        "M1 Organ [Instrument]",	/* 385 */
        "Brass Ens. [Instrument]",	/* 386 */
        "Tenor Sax [Instrument]",	/* 387 */
        "Alto Sax [Instrument]",	/* 388 */
        "Strings Ens. [Instrument]",	/* 389 */
        "Strings Pizz [Instrument]",	/* 390 */
        "Vox Pop Ah [Instrument]",	/* 391 */
        "Vox Pad [Instrument]",		/* 392 */
        "Vox Helium [Instrument]",	/* 393 */
        "A.Bass [Instrument]",		/* 394 */
        "E.Bass Finger [Instrument]",	/* 395 */
        "E.Bass Pick [Instrument]",	/* 396 */
        "E.Bass Slap [Instrument]",	/* 397 */
        "E.Bass Dist. [Instrument]",	/* 398 */
        "A.Guitar [Instrument]",	/* 399 */
        "E.Guitar 1 [Instrument]",	/* 400 */
        "E.Guitar 2 [Instrument]",	/* 401 */
        "Kalimba [Instrument]",		/* 402 */
        "Metal Bell [Instrument]",	/* 403 */
        "GamelanWave [Instrument]",	/* 404 */
        "Bell1 [Instrument]",		/* 405 */
        "Bell2 [Instrument]",		/* 406 */
        "Bell3 [Instrument]",		/* 407 */
        "Bell4 [Instrument]",		/* 408 */
        "Audio In [Audio In]",		/* 409 */
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
        "Electribe HPF",	/* 7 */
        "MS20 HPF",		/* 8 */
        "P5 HPF",		/* 9 */
        "OB HPF",		/* 10 */
        "Acid HPF",		/* 11 */
        "Electribe BPF",	/* 12 */
        "MS20 BPF",		/* 13 */
        "P5 BPF",		/* 14 */
        "OB BPF",		/* 15 */
        "Acid BPF",		/* 16 */
	NULL
};

const char      *e2c_mod_type_names[] = {
        "EG+ Filter",		/* 00 */
        "EG+ Pitch",		/* 01 */
        "EG+ OSC",		/* 02 */
        "EG+ Level",		/* 03 */
        "EG+ Pan",		/* 04 */
        "EG+ IFX",		/* 05 */

        "EG+ BPM Filter",	/* 06 */
        "EG+ BPM Pitch",	/* 07 */
        "EG+ BPM OSC",		/* 08 */
        "EG+ BPM Level",	/* 09 */
        "EG+ BPM Pan",		/* 10 */
        "EG+ BPM IFX",		/* 11 */

        "EG- Filter",		/* 12 */
        "EG- Pitch",		/* 13 */
        "EG- OSC",		/* 14 */
        "EG- Level",		/* 15 */
        "EG- Pan",		/* 16 */
        "EG- IFX",		/* 17 */

        "EG- BPM Filter",	/* 18 */
        "EG- BPM Pitch",	/* 19 */
        "EG- BPM OSC",		/* 20 */
        "EG- BPM Level",	/* 21 */
        "EG- BPM Pan",		/* 22 */
        "EG- BPM IFX",		/* 23 */


        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
        "",		/* 71 */
	NULL
};

const char      *e2c_eg_on_names[] = {
        "Off",			/* 0 */
        "On",			/* 1 */
	NULL
};

const char      *e2c_mfx_send_on_names[] = {
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
	bprintf(out, "\n");
	bprintf(out, "Oscillator\n");
	bprintf(out, " Type: %03d %s\n", part->ep_osc_type + 1,
	    e2c_get_name(e2c_osc_type_names, part->ep_osc_type));
	bprintf(out, " Edit: %d\n", part->ep_osc_edit);
	bprintf(out, " Pitch: %d\n", part->ep_osc_pitch);
	bprintf(out, " Glide: %d\n", part->ep_osc_glide);
	bprintf(out, "\n");

	bprintf(out, "Filter\n");
	if(part->ep_filt_type) {
		bprintf(out, " Type: %s\n",
		    e2c_get_name(e2c_filt_type_names, part->ep_filt_type));
		bprintf(out, " Cutoff: |%d|\n", part->ep_filt_cutoff);
		bprintf(out, " Resonance: |%d|\n", part->ep_filt_res);
		bprintf(out, " EG Int: |%d|\n", part->ep_filt_egint);
	} else
		bprintf(out, " OFF\n");
	bprintf(out, "\n");

	bprintf(out, "Modulation\n");
	bprintf(out, " Type: %02d %s\n", (part->ep_mod_type + 1),
	    e2c_get_name(e2c_mod_type_names, part->ep_mod_type));
	bprintf(out, "  Depth: %d\n", part->ep_mod_depth);
	bprintf(out, "  Speed: %d\n", part->ep_mod_speed);
	bprintf(out, "\n");

	bprintf(out, "FX\n");
	bprintf(out, " IFX: |%d| %s\n", part->ep_ifx_on,
	    e2c_get_name(e2c_ifx_on_names, part->ep_ifx_on));
	if(part->ep_ifx_on) {
		bprintf(out, " IFX Type: |%d| %s\n", part->ep_ifx_type,
		    e2c_get_name(e2c_ifx_type_names, part->ep_ifx_type));
		bprintf(out, " IFX Edit: |%d|\n", part->ep_ifx_edit);
	}
	bprintf(out, " MFX Send: |%d| %s\n", part->ep_mfx_send_on,
	    e2c_get_name(e2c_mfx_send_on_names, part->ep_mfx_send_on));
	bprintf(out, "\n");
	
	bprintf(out, "Amp/EG");
	bprintf(out, " Amp Level: |%d|\n", part->ep_amp_level);
	bprintf(out, " Amp Pan: ");
	if(part->ep_amp_pan == 0)
		bprintf(out, "Center");

	bprintf(out, " EG on: |%d| %s\n", part->ep_eg_on,
	    e2c_get_name(e2c_eg_on_names, part->ep_eg_on));
	if(part->ep_eg_on) {
		bprintf(out, " EG Attack: |%d|\n", part->ep_eg_attack);
		bprintf(out, " EG Decay/Release: |%d|\n",
		    part->ep_eg_decayrel);
	}
	bprintf(out, "\n");

	bprintf(out, "Groove\n");
	bprintf(out, " Type: |%d| %s\n", part->ep_groove_type,
	    e2c_get_name(e2c_groove_type_names, part->ep_groove_type));
	bprintf(out, " Depth: |%d|\n", part->ep_groove_depth);

	bprintf(out, "\n");

	bprintf(out, "Misc\n");
	bprintf(out, " Mute: |%d| %s\n", part->ep_mute,
	    e2c_get_name(e2c_mute_names, part->ep_mute));
	bprintf(out, " Voice Assign: |%d| %s\n", part->ep_voice_assign,
	    e2c_get_name(e2c_voice_assign_names, part->ep_voice_assign));
	bprintf(out, " Motion Sequence: |%d| %s\n", part->ep_motion_sequence,
	    e2c_get_name(e2c_motion_sequence_names, part->ep_motion_sequence));
	bprintf(out, " Trigger Pad Velocity: |%d| %s\n",
	    part->ep_tp_velocity,
	    e2c_get_name(e2c_tp_velocity_names, part->ep_tp_velocity));
	bprintf(out, " Scale Mode: |%d| %s\n", part->ep_scale_mode,
	    e2c_get_name(e2c_scale_mode_names, part->ep_scale_mode));
	bprintf(out, " Part Priority: |%d| %s\n", part->ep_part_pri,
	    e2c_get_name(e2c_part_pri_names, part->ep_part_pri));
	bprintf(out, " Last Step: |%d|\n", part->ep_last_step);
	bprintf(out, "\n", partnr);

	

	bprintf(out, "\n");
	


	bprintf(out, "\n");

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

