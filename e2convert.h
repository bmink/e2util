#ifndef E2STRUCTS_H
#define E2STRUCTS_H

#include "bstr.h"

typedef struct e2_part {
	unsigned char	ep_last_step;				/* 0	*/
	unsigned char	ep_mute;				/* 1	 */
	unsigned char	ep_voice_assign;			/* 2	 */
	unsigned char	ep_motion_sequence;			/* 3	 */
	unsigned char	ep_tp_velocity;				/* 4	 */
	unsigned char	ep_scale_mode;				/* 5	 */
	unsigned char	ep_part_pri;				/* 6	 */
	unsigned char	ep_reserved1;				/* 7	 */
	unsigned short	ep_osc_type;				/* 8,9	 */
	unsigned char	ep_reserved2;				/* 10	 */
	unsigned char	ep_osc_edit;				/* 11	 */
	unsigned char	ep_filt_type;				/* 12	 */
	unsigned char	ep_filt_cutoff;				/* 13	 */
	unsigned char	ep_filt_res;				/* 14	 */
	unsigned char	ep_filt_egint;				/* 15	 */
	unsigned char	ep_mod_type;				/* 16	 */
	unsigned char	ep_mod_speed;				/* 17	 */
	unsigned char	ep_mod_depth;				/* 18	 */
	unsigned char	ep_reserved3;				/* 19	 */
	unsigned char	ep_env_attack;				/* 20	 */
	unsigned char	ep_env_decayrel;			/* 21 	 */
	unsigned short	ep_reserved4;				/* 22,23 */
	unsigned char	ep_amp_level;				/* 24	 */
	unsigned char	ep_amp_pan;				/* 25	 */
	unsigned char	ep_env_on;				/* 26	 */
	unsigned char	ep_mfx_send_on;				/* 27	 */
	unsigned char	ep_groove_type;				/* 28	 */
	unsigned char	ep_groove_depth;			/* 29	 */
	unsigned short	ep_reserved5;				/* 30,31 */
	unsigned char	ep_ifx_on;				/* 32	 */
	unsigned char	ep_ifx_type;				/* 33	 */
	unsigned char	ep_ifx_edit;				/* 34	 */
	unsigned char	ep_reserved6;				/* 35	 */
	unsigned char	ep_osc_pitch;				/* 36	 */
	unsigned char	ep_osc_glide;				/* 37	 */
} e2_part_t;


typedef struct e2_mfx {
	unsigned char	em_reserved1;				/* 0     */
	unsigned char	em_type;				/* 1	 */
	unsigned char	em_pad_x;				/* 2	 */
	unsigned char	em_pad_y;				/* 3	 */
	unsigned char	em_reserved2;				/* 4	 */
	unsigned char	em_hold;				/* 5	 */
	unsigned short	em_reserved3;				/* 6,7	 */
} e2_mfx_t;


#define E2CONV_SYSEX_SIZE	16384
#define E2CONV_MAXPART		16

#define E2CONV_PART0_OFFSET	2048
#define E2CONV_PART_SIZE	816

#define E2CONV_MFX_OFFSET	60

int e2c_check_sysex(bstr_t *);
int e2c_convert_soundpatch(bstr_t *, bstr_t *, int);

const char *e2c_get_name(const char **, int);


const char	*e2c_osc_type_names[];
const char	*e2c_mute_names[];
const char	*e2c_voice_assign_names[];
const char	*e2c_motion_sequence_names[];
const char	*e2c_tp_velocity_names[];
const char	*e2c_scale_mode_names[];
const char	*e2c_part_pri_names[];



#endif
