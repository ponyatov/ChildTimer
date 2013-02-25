all: TIMER.exe TIMER_GUI.exe

clean:
	rm -f *.o *.exe

TARGET = mingw32

CC = $(TARGET)-gcc
FLAGS = -march=native -O2 -pipe

%.exe: %.c TIMER.h Makefile
	$(CC) $(FLAGS) -o $@ $<
	