##
## EPITECH PROJECT, 2021
## sokoban
## File description:
## Makefile
##

SRC	=	my_strlen.c \
		my_putstr.c

TEST_SRC	=	my_strlen.c \
			my_putstr.c \
			tests/test_my_strlen.c \
			tests/test_my_putstr.c \
			tests/test_my_putchar.c

OBJ	=	$(SRC:.c=.o)

TEST_OBJ	=	$(TEST_SRC:.c=.o)

TEST_NAME	=	units_tests

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

tests_run:	 $(TEST_SRC)
	gcc -o $(TEST_NAME) $(TEST_SRC) --coverage -lcriterion
	./$(TEST_NAME)
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: all fclean re tests_run
