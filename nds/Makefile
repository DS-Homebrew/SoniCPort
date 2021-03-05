#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------
ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

export TARGET	:=	SoniCPort

include $(DEVKITARM)/ds_rules

.PHONY: clean makearm7 makearm9

all:	$(TARGET).nds

makearm7:
	$(MAKE) -C arm7
	cp arm7/$(TARGET).elf $(TARGET).arm7.elf

makearm9:
	$(MAKE) -C arm9
	cp arm9/$(TARGET).elf $(TARGET).arm9.elf

dist:	all

$(TARGET).nds:	makearm7 makearm9
	ndstool	-u 00030004 -g HS1A -c $(TARGET).nds -7 $(TARGET).arm7.elf -9 $(TARGET).arm9.elf\
  -b icon.bmp "Sonic the Hedgehog;SEGA"

clean:
	@echo clean ...
	@rm -fr $(BUILD) $(TARGET).elf $(TARGET).nds
	@rm -fr $(TARGET).arm7.elf
	@rm -fr $(TARGET).arm9.elf
	@$(MAKE) -C arm9 clean
	@$(MAKE) -C arm7 clean