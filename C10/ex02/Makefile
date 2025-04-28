# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCS_DIR = ./srcs
OBJ_DIR = ./obj
BIN_DIR = ./bin

# Output binary
TARGET = $(BIN_DIR)/ft_tail

# Find all source files
SRCS = $(wildcard $(SRCS_DIR)/*.c)

# Generate object files from source files
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Make the necessary directories
$(shell mkdir -p $(OBJ_DIR) $(BIN_DIR))

# Default target: build the program
all: $(TARGET)

# Link the object files into the final binary
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compile each source file into object files
$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and binary
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Remove all generated files, including the binary
fclean: clean
	rm -f $(TARGET)

# Rebuild everything
re: fclean all

