#ifndef E2STRUCTS_H
#define E2STRUCTS_H

#include "bstr.h"

typedef struct e2_partpatch {
	unsigned char	ep_last_step;
	unsigned char	ep_mute;
	unsigned char	ep_voice_assign;
	unsigned char	ep_motion_sequence;
	unsigned char	ep_tp_velocity;
	unsigned char	ep_scale_mode;
	unsigned char	ep_part_pri;
	unsigned char	ep_reserved1;
	unsigned short	ep_osc;
	unsigned char	ep_reserved2;
	unsigned char	ep_osc_edit;
	unsigned char	ep_filt_type;
	unsigned char	ep_filt_cutoff;
	unsigned char	ep_filt_res;
	unsigned char	ep_filt_egint;
	unsigned char	ep_mod_type;
	unsigned char	ep_mod_speed;
	unsigned char	ep_mod_depth;
	unsigned char	ep_reserved3;
	unsigned char	ep_env_attack;
	unsigned char	ep_env_decayrel;
	unsigned short	ep_reserved4;
	unsigned char	ep_ifx_on;
	unsigned char	ep_ifx_type;
	unsigned char	ep_ifx_edit;
	unsigned char	ep_reserved5;
	unsigned char	ep_osc_pitch;
	unsigned char	ep_osc_glide;
} e2_soundpatch_t;

#define E2CONV_SYSEX_SIZE	16384
#define E2CONV_MAXPART		16

int e2c_check_sysex(bstr_t *);
int e2c_convert_soundpatch(bstr_t *, bstr_t *, int);


#endif
