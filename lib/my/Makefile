##
## EPITECH PROJECT, 2022
## mylib
## File description:
## Make config file
##

SRC =	./my_compute_power_rec.c \
	./my_compute_square_root.c \
	./my_find_prime_sup.c \
	./my_is_prime.c \
	./my_isneg.c \
	./my_put_nbr.c \
	./my_putchar.c \
	./my_putstr.c \
	./my_revstr.c \
	./my_show_word_array.c \
	./my_showmem.c \
	./my_showstr.c \
	./my_sort_int_array.c \
	./my_str_isalpha.c \
	./my_str_islower.c \
	./my_str_isnum.c \
	./my_str_isprintable.c \
	./my_str_isupper.c \
	./my_strcapitalize.c \
	./my_strcat.c \
	./my_strcmp.c \
	./my_strcpy.c \
	./my_strdup.c \
	./my_strlen.c \
	./my_strlowcase.c \
	./my_strncat.c \
	./my_strncmp.c \
	./my_strncpy.c \
	./my_strstr.c \
	./my_strupcase.c \
	./my_swap.c \
	./my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME).a $(OBJ)
	cp $(NAME).a ../$(NAME).a
	mkdir -p ../../include
	cp include/*.h ../../include
	make clean

clean:
	rm *.o
	find -name "#*#" -delete -o -name "*~" -delete

fclean: clean
	rm -f $(NAME).a

re: fclean all

.PHONY: all clean fclean re
