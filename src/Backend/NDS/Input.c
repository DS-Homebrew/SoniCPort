#include <nds.h>

#include <Backend/Joypad.h>

//Backend input interface
int Input_HandleEvents()
{
	scanKeys();
	return 0;
}

uint8_t Input_GetState1()
{
	//Get keyboard state
	const uint8_t *key_state = keysHeld();
	uint8_t start = key_state[KEY_START] ? JPAD_START : 0;
	uint8_t a     = key_state[KEY_Y]     ? JPAD_A     : 0;
	uint8_t b     = key_state[KEY_B]     ? JPAD_B     : 0;
	uint8_t c     = key_state[KEY_A]     ? JPAD_C     : 0;
	uint8_t right = key_state[KEY_RIGHT] ? JPAD_RIGHT : 0;
	uint8_t left  = key_state[KEY_LEFT]  ? JPAD_LEFT  : 0;
	uint8_t down  = key_state[KEY_DOWN]  ? JPAD_DOWN  : 0;
	uint8_t up    = key_state[KEY_UP]    ? JPAD_UP    : 0;
	
	//Return as bitfield
	return start | a | c | b | right | left | down | up;
}

uint8_t Input_GetState2()
{
	//No use in Sonic 1
	return 0;
}
