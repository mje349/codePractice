CC=g++
CFLAGS= -Wall -Werror -g
OBJS= lll.o

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) main.cpp

lll.o: lll.cpp
	$(CC) $(CFLAGS) -c lll.cpp -o lll.o

clean:
	rm *.o *.out
