main.hex : main.c
	sdcc --verbose -V main.c
	packihx main.ihx > main.hex
	hex2bin main.hex
clean:
	rm -rf *.asm *.lst *.lk *.mem *.rst *.lnk *.rel *.sym *.ihx *.hex *.map *.bin
