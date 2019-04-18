##
## EPITECH PROJECT, 2018
## MAKEFILE
## File description:
## script for compil all your lib
##

NAME	=	mysh

SRC 	=	src/main.c				\
			src/basic_function.c	\
			src/exec.c				\
			src/env.c				\
			src/imput.c				\
			src/cd.c				\

OBJ 	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Iinc/

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc $(CFLAGS) $(LDFLAGS) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
