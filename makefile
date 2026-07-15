# Quick Shortcuts
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = landlords

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Compiling only changed files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# Commands
## Run compiled file
run: $(TARGET)
	./$(TARGET)

## Remove compiled files
clean: 
	rm -f $(OBJS) $(TARGET)

# Phony declarations
.PHONY: run clean

