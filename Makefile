all: TIMER.exe TIMER_GUI.exe

%.exe: %.c TIMER.h
	gcc -o $@ $<
	