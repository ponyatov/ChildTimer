all: TIMER.exe TIMER_GUI.exe

%.exe: %.c
	gcc -o $@ $<
	