#compiler: gcc for C program, define as g++ for C++
CC = gcc
 
# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS=-g -Wall
LIBS=-lm

# the build target executable:
all: problem1 problem2 problem3
$(TARGET): $(TARGET).c
	$(CC) -o $(TARGET) $(TARGET).o $(TARGET).c $(CFLAGS)

clean:
	$(RM) $(TARGET)
