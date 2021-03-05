#include "../VDP.h"

#include <nds.h>
#include <stdio.h>

//Render compile options
//#define DISPLAY_PADDING //Displays the internal VDP padding

#ifdef DISPLAY_PADDING
	#define TEXTURE_WIDTH  (SCREEN_WIDTH  + (VDP_INTERNAL_PAD * 2))
	#define TEXTURE_HEIGHT SCREEN_HEIGHT
#else
	#define TEXTURE_WIDTH  SCREEN_WIDTH
	#define TEXTURE_HEIGHT SCREEN_HEIGHT
#endif

//Backend render interface
int Render_Init(const MD_Header *header)
{
	return 0;
}

void Render_Quit()
{
}

//This takes in the internal VDP screen buffer positioned after the padding
void Render_Screen(const uint32_t *screen)
{
}
