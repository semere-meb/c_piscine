CC = gcc
FGLAGS = -Wall -Werror -Wextra

NAME = ft_cat
SRC = $(NAME:%=%.c)
OBJ = $(NAME:%=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FGLAGS) -o $@ $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

.PHONY = all clean fclean
