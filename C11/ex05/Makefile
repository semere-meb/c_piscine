CC = gcc
CFLAGS = -Wall -Werror -Wextra

TARGET = do-op
SRCS = do_op.c
OBJS = $(SRCS:%.c=%.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

