all: TIMER.exe TIMER_GUI.exe

clean:
	rm -f *.o *.exe

%.exe: %.c TIMER.cfg Makefile
	gcc $(CFLAGS) -o $@ $<
	