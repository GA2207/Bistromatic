##
## EPITECH PROJECT, 2026
## Bistromatic
## File description:
## Build libmy, the calc binary and the unit tests
##

NAME		=	calc

MAIN_SRC	=	src/main.c

MAIN_OBJ	=	$(MAIN_SRC:.c=.o)

SRC		=

OBJ		=	$(SRC:.c=.o)

TEST_SRC	=	tests/tests_bistromatic.c

TEST_NAME	=	unit_tests

LIB_DIR		=	lib/my

LIB		=	$(LIB_DIR)/libmy.a

LIB_SRC		=	$(LIB_DIR)/my_getnbr.c	\
			$(LIB_DIR)/my_putchar.c	\
			$(LIB_DIR)/my_putstr.c	\
			$(LIB_DIR)/my_revstr.c	\
			$(LIB_DIR)/my_strcmp.c	\
			$(LIB_DIR)/my_strcpy.c	\
			$(LIB_DIR)/my_strdup.c	\
			$(LIB_DIR)/my_strlen.c	\
			$(LIB_DIR)/my_strncmp.c

LIB_OBJ		=	$(LIB_SRC:.c=.o)

CC		=	epiclang

CFLAGS		=	-Wall -Wextra -Werror -I./include

LDFLAGS		=	-L$(LIB_DIR) -lmy

all:	$(NAME)

$(LIB):	$(LIB_OBJ)
	ar rc $(LIB) $(LIB_OBJ)

$(NAME):	$(LIB) $(MAIN_OBJ) $(OBJ)
	$(CC) -o $(NAME) $(MAIN_OBJ) $(OBJ) $(LDFLAGS)

tests_run:	$(LIB)
	$(CC) -o $(TEST_NAME) $(SRC) $(TEST_SRC) $(CFLAGS) $(LDFLAGS) \
		-lcriterion --coverage
	./$(TEST_NAME)

clean:
	rm -f $(MAIN_OBJ) $(OBJ) $(LIB_OBJ)
	rm -f *.gcda *.gcno

fclean:	clean
	rm -f $(NAME) $(TEST_NAME) $(LIB)

re:	fclean all

.PHONY:	all tests_run clean fclean re
