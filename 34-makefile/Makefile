TARGET=someprogram
CXX=g++
LD=g++
OBJS=something.cpp
someprogram:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS)
install:
	@install someprogram /usr/local/bin/someprogram
clean:
	rm -rf *.o