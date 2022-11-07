##
## EPITECH PROJECT, 2022
## mylib
## File description:
## Make config file
##

SRC_MY =	./my/my_compute_power_rec.c \
	./my/my_compute_square_root.c \
	./my/my_find_prime_sup.c \
	./my/my_is_prime.c \
	./my/my_isneg.c \
	./my/my_put_nbr.c \
	./my/my_putchar.c \
	./my/my_putstr.c \
	./my/my_revstr.c \
	./my/my_show_word_array.c \
	./my/my_showmem.c \
	./my/my_showstr.c \
	./my/my_sort_int_array.c \
	./my/my_str_isalpha.c \
	./my/my_str_islower.c \
	./my/my_str_isnum.c \
	./my/my_str_isprintable.c \
	./my/my_str_isupper.c \
	./my/my_strcapitalize.c \
	./my/my_strcat.c \
	./my/my_strcmp.c \
	./my/my_strcpy.c \
	./my/my_strdup.c \
	./my/my_strlen.c \
	./my/my_strlowcase.c \
	./my/my_strncat.c \
	./my/my_strncmp.c \
	./my/my_strncpy.c \
	./my/my_strstr.c \
	./my/my_strupcase.c \
	./my/my_swap.c \
	./my/my_getnbr.c

SRC_PRINTF	=	./printf/src/my_printf.c \
				./printf/src/int/get_flag.c \
				./printf/src/int/print.c \
				./printf/src/int/push.c \
				./printf/src/parse/flags.c \
				./printf/src/parse/util.c \
				./printf/src/print/length_mod.c \
				./printf/src/print/print.c \
				./printf/src/str/padding.c \
				./printf/src/str/print.c

SRC_STRING	=	./string/alloc.c \
				./string/push.c

HEADERS	=	./includes/my.h \
			./includes/my_printf.h \
			./includes/my_string.h

OBJ_MY	=	$(SRC_MY:.c=.o)

OBJ_PRINTF	=	$(SRC_PRINTF:.c=.o)

OBJ_STRING	=	$(SRC_STRING:.c=.o)

CPPFLAGS	=	-I./includes

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ_MY) $(OBJ_PRINTF) $(OBJ_STRING)
	ar rc $(NAME) $(OBJ_MY) $(OBJ_PRINTF) $(OBJ_STRING)
	mkdir -p ../includes
	cp $(HEADERS) ../includes
	make clean

clean:
	rm *.o
	find -name "#*#" -delete -o -name "*~" -delete

fclean: clean
	rm -f $(NAME).a

re: fclean all

.PHONY: all clean fclean re
