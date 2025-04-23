CC = gcc
CFLAGS = -Wall -Werror -Wextra

MAIN = main.c

SRC_DIR = srcs
SRC_FILES = ft_display_file.c
SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

INC_DIR = includes
INC_FILES = ft_display_file.h
HEADERS = $(INC_DIR)/$(INC_FILES)

OBJS = $(SRCS:.c=.o)

NAME = libdisplay.a
PROGRAM = ft_display_file

all: $(PROGRAM)

# default rule
PROGRAM: $(NAME)
	$(CC) $(CFLAGS) -I $(INC_DIR) $< -o $@

# build the library
$(NAME): $(OBJS)
	/bin/ar rcs $(NAME) $(OBJS)
	clean

# build the program
$(PROGRAM): main.o $(NAME)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(MAIN:%.c=%.o) -L. -l$(NAME:lib%.a=%)

# compile the main file
main.o: main.c $(HEADER)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $(MAIN) -o $(MAIN:%.c=%.o)

# compile the sources
$(SRC_DIR)%.o: $(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

# clean the temp files (.o files)
clean:
	/bin/rm -f $(OBJS)
	/bin/rm -f $(MAIN:%.c=%.o)

# clean all outputs (.o, library and program)
fclean: clean
	/bin/rm -f $(NAME) $(PROGRAM)

# rebuild
re: fclean all

.PHONY: all clean fclean re

