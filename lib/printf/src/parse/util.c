/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** util
*/

#include "internal/parse.h"

int p_starts_with(const char *source, const char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (source[i] != str[i])
            return 0;
    }

    return 1;
}

int p_contains(char *source, char **elems, int size)
{
    for (int i = 0; i < size; i++) {
        if (p_starts_with(source, elems[i]))
            return i;
    }

    return -1;
}

int p_str_len(const char *str)
{
    int i = 0;
    while (*str) {
        str++;
        i++;
    }
    return i;
}

int p_get_nbr(char const *str)
{
    long count = 0;
    int is_neg = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i - 1] == '-' && count < 1) is_neg = -1;
        if ((!IS_NBR(str[i])) && count > 0) {
            return count * is_neg;
        }
        if (count > 2147483648) {
            return 0;
        }
        if (IS_NBR(str[i])) {
            count = count * 10 + (str[i] - '0');
        }
    }
    return count * is_neg;
}
