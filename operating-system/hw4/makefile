CC = gcc
OBJS = simulator.o
TARGET = a.out

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)
simulator.o : simulator.c
	$(CC) -c -o simulator.o simulator.c

clean :
	rm -f *.o
	rm -f $(TARGET)
