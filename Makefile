##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## main makefile
##

SRC		=	src/bakcground.c \
			src/init.c \
			src/init2.c \
			src/sprite.c \
			src/main.c \
			src/display.c \
			src/menu.c \
			src/event.c \
			src/my_convert_int_string.c \
			src/my_strcpy.c \
			src/my_strlen.c \
			src/my_strncmp.c \
			src/my_putchar.c \
			src/my_putstr.c \
			src/my_strdup.c

CC		=	gcc

OBJ     =   $(SRC:.c=.o)

NAME    =   my_hunter

CFLAGS  =   -Wall -Wextra -g3

CSFMLF  = 	-lcsfml-graphics -lcsfml-system

all: 		$(NAME)

$(NAME):    $(OBJ)
			$(CC) $(OBJ) -o $(NAME) -I./includes $(CFLAGS) $(CSFMLF)
clean:
			$(RM) $(OBJ)

fclean: 	clean
	 		$(RM) $(NAME)

re: 		fclean all

tests_run:	$(CC) $(SRC) $(TSRC) $(LIB) --coverage -lcriterion -o $(TNAME)
			./unit_test

.PHONY: 	all clean fclean re tests_run
