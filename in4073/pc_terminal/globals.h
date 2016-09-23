#ifndef  GLOBALS_h__
#define GLOBALS_h__

/*jmi*/

char yaw_offset;
char pitch_offset;
char roll_offset;
char lift_offset;

char kb_yaw;
char kb_pitch;
char kb_roll;
char kb_lift;

char js_yaw;
char js_pitch;
char js_roll;
char js_lift;

char yaw_offset_p;
char roll_pitch_offset_p1;
char roll_pitch_offset_p2;

char mode = 0;

int	axis[6];
int	button[12];
packet js_p_buffer[6];
int counter = 0;

packet mypacket;

#endif
