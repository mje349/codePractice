C=g++
CFLAGS= -Wall -Werror -g --pedantic
OBJS= lll.o

all:
	$(CC) $(CFLAGS) $(OBJS) main.cpp

lll.o: lll.cpp
	$(CC) $(CFLAGS) -c lll.cpp

clean:
	rm *.o *.out
