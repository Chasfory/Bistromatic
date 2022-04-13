##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## bistro makefile
##

NAME		=	calc

TESTS		=	unit_test

CC		=	gcc

RM		=	rm -f

GCOVR		=	gcovr

LIB		=	-L./lib/my -lmy

INC		=	-I./include

CRIT		=	-lcriterion

COVER		=	--coverage

BRANCH		=	--branches

EXCLUD		=	--exclude

CPPFLAGS 	=	$(INC) -Wall -Wextra

SRC_DIR		=	src/

TESTS_DIR	=	tests/

OBJ		=	$(SRC:.c=.o)

GCNO		=	$(UNIT_TEST:.c=.gcno)

GCDA		=	$(UNIT_TEST:.c=.gcda)

UNIT_TEST	=	$(TESTS_DIR)test_eval_expr.c 	        \
			$(TESTS_DIR)test_add_inf.c             	\
			$(TESTS_DIR)test_sub_inf.c             	\
			$(TESTS_DIR)test_mult_inf.c             \
			$(TESTS_DIR)test_div_inf.c		\
			$(TESTS_DIR)test_mod_inf.c		\
			$(SRC_DIR)error.c                       \
                        $(SRC_DIR)core.c                        \
                        $(SRC_DIR)core2.c                       \
                        $(SRC_DIR)add_inf.c                     \
                        $(SRC_DIR)sub_inf.c                     \
                        $(SRC_DIR)mult_inf.c                    \
                        $(SRC_DIR)div_inf.c                     \
                        $(SRC_DIR)mod_inf.c                     \
			$(SRC_DIR)eval_expr.c			\

SRC		=	$(SRC_DIR)error.c			\
			$(SRC_DIR)core.c			\
			$(SRC_DIR)core2.c			\
			$(SRC_DIR)add_inf.c			\
			$(SRC_DIR)sub_inf.c			\
			$(SRC_DIR)mult_inf.c			\
			$(SRC_DIR)div_inf.c			\
			$(SRC_DIR)mod_inf.c			\
			$(SRC_DIR)eval_expr.c			\
			$(SRC_DIR)man.c				\
			$(SRC_DIR)main.c

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LIB)

unit_test: fclean
	$(MAKE) -C lib/my
	$(CC) -o $(TESTS) $(UNIT_TEST) $(LIB) $(INC) $(COVER) $(CRIT)

tests_run: unit_test
	./$(TESTS)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR) $(BRANCH)

clean:
	$(MAKE) -C lib/my clean
	$(RM) $(OBJ) *gc*

fclean:	clean
	$(MAKE) -C lib/my fclean
	$(RM) $(NAME) $(TESTS)

re:	fclean all

.PHONY: all tests fclean re
