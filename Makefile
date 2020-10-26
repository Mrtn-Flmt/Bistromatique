##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

LP	=	lib/my/

SRC	=	./main.c	\
		./calc.c	\
		./separate_exp.c	\
		./$(LP)my_strdup.c	\
		./$(LP)my_getnbr.c	\
		./$(LP)my_strlen.c	\
		./$(LP)my_putchar.c \
		./$(LP)my_put_nbr.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include

NAME = eval_expr

$(NAME): $(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f clean $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all