CC = gcc
CFLAGS = -Wall -Werror -Wextra

TARGET = do-op

SRCS_DIR = srcs
INCLUDES_DIR = includes

SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(SRCS_DIR)/%.o)
HEADERS = $(wildcard $(INCLUDES_DIR)/*.h)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -I $(INCLUDES_DIR) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: all clean fclean

