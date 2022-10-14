##
## EPITECH PROJECT, 2022
## mylib
## File description:
## Make config file
##

SRC	=	*.c
OBJ	=	$(SRC:.c=.o)

NAME	=	mylib

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC) -I../../include
	ar rc libmy.a $(OBJ)
	cp libmy.a ../libmy.a
	cp include/*.h ../../include
	make clean

clean:
	rm *.o
	find -name "#*#" -delete -o -name "*~" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

auteur:
	echo $(USER) > auteur
