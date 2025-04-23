# compiler & flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# dirs
INC_DIR = includes
SRC_DIR = srcs

# source and object files
SRC_FILES = ft_putchar.c \
			ft_swap.c ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c
SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(SRCS:.c=.o)

# header
HEADER= $(INC_DIR)/ft.h

# library name
NAME = libft.a

# Default: builds lib
all: $(NAME)

# build lib rule
$(NAME): $(OBJS)
	/bin/ar rcs $(NAME) $(OBJS)

# compile sources to objects
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

# clean objetc/temp files
clean:
	/bin/rm -f $(OBJS)


# clean object files and library
fclean: clean
	/bin/rm -f $(NAME)

# rebuild everything
re: fclean all

# protect rules
.PHONY: all clean fclean re

