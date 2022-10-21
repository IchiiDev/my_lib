##
## EPITECH PROJECT, 2022
## Cworkshoplib
## File description:
## Project makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	project

LDFLAGS	=	-L./lib/ -lmy

CPPFLAGS	= -I./include/

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS)

clean:
	find -name "#*#" -delete -o -name "*~" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
