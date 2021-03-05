#include <nds.h>

#include "../MegaDrive.h"

#include <stdio.h>

//System interface
int System_Init(const MD_Header *header)
{
	consoleDemoInit();
	irqSet(IRQ_VBLANK, header.v_interrupt);
	//irqSet(IRQ_HBLANK, header.h_interrupt);
	printf("System_Init: %s\n", header.title);
	return 0;
}

void System_Quit()
{
}
