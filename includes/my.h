/*
** EPITECH PROJECT, 2022
** cpoolday09
** File description:
** my header file
*/

#ifndef MY_LIB
    #define MY_LIB

    #define IS_NBR(x) (x >= '0' && x <= '9') ? 1 : 0

    #define IS_LOWCASE(c) (c >= 'a' && c <= 'z') ? 1 : 0

    #define IS_UPCASE(c) (c >= 'A' && c <= 'Z') ? 1 : 0

void my_putchar(char c);

char *my_strstr(char *str, char const *to_find);

int my_isneg(int nb);

int my_strcmp(char const *s1, char const *s2);

int my_put_nbr(int nb);

int my_strncmp(char const *s1, char const *s2, int n);

void my_swap(int *a, int *b);

char *my_strupcase(char *str);

int my_putstr(char const *str);

char *my_strlowcase(char *str);

int my_strlen(char const *str);

char *my_strcapitalize(char *str);

int my_getnbr(char const *str);

int my_str_isalpha(char const *str);

int my_sort_int_array(int *tab, int size);

int my_str_isnum(char const *str);

int my_compute_power_rec(int nb, int power);

int my_str_islower(char const *str);

int my_compute_square_root(int nb);

int my_str_isupper(char const *str);

int my_is_prime(int nb);

int my_str_isprintable(char const *str);

int my_find_prime_sup(int nb);

int my_showstr(char const *str);

char *my_strcpy(char *dest, char const *src);

int my_showmem(char const *str, int size);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strcat(char *dest, char const *src);

char *my_revstr(char *str);

char *my_strncat(char *dest, char const *src, int nb);

char *my_show_word_array(char **array);

char *my_strdup(char const *str);

int my_is_alpha(char const c);

#endif
