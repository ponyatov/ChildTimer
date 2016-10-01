all: $(notdir $(CURDIR)).exe
CFLAGS += -mwindows
%.exe: %.cpp Makefile
	$(CXX) $(CFLAGS) -o $@ $< 
