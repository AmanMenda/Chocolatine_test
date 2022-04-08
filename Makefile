##
## EPITECH PROJECT, 2021
## sokoban
## File description:
## Makefile
##

SRC	=	my_strlen.c \
		my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bin

all: $(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ) -g3 -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)
	rm -f src/*~
	rm -f *.gcno
	rm -f *.gcda
	rm -f src/*#
	rm -f src/vgcore.*

re: fclean all

.PHONY: all fclean re tests_run
