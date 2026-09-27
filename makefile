# Quick shortcuts
CC = gcc
CFLAGS = -Wall -Wextra -Isrc
TARGET = landlords
SRC_DIR = src

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking target binary
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compiling source files into object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Run compiled file
run: $(TARGET)
	./$(TARGET)

# Remove compiled files
clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

# Phony declarations
.PHONY: all run clean
