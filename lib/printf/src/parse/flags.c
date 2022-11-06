/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** parse_flags
*/

#include <stdarg.h>

#include "internal/parse.h"

static const char *FLAGS[] = {"#", "0", "-", " ", "+"};
static const char *LENGTH_MOD[] = {"hh", "h", "ll", "l", "L", "j", "z", "t"};
static const char *CONV[] = {"d", "i", "o", "u", "x", "X", "e", "E", "f", \
    "F", "g", "G", "a", "A", "b", "c", "s", "S", "p", "n", "%"};

static void parse_comp_flags(char **str, int *flags) {
    while (p_contains(*str, (char **) FLAGS, 5) != -1) {
        *flags |= (1 << p_contains(*str, (char **) FLAGS, 5));
        (*str)++;
    }
}

static void parse_width(char **str, int *width, va_list *list)
{
    if (**str == '*') {
        *width = va_arg(*list, int);
        (*str)++;
    }

    if (IS_NBR(**str)) {
        *width = p_get_nbr(*str);
        while (IS_NBR(**str))
            (*str)++;
    }
}

static void parse_precision(char **str, int *precision, va_list list)
{
    (*str)++;

    if (**str == '*') {
        *precision = va_arg(list, int);
        (*str)++;
    }
    if (IS_NBR(**str)) {
        *precision = p_get_nbr(*str);
        while (IS_NBR(**str))
            (*str)++;
    }
}

static void parse_length_mod(char **str, int *flags)
{
    int index = p_contains(*str, (char **) LENGTH_MOD, 8);
    if (index != -1) {
        *flags |= (1 << (index + 5));
        *str += p_str_len(LENGTH_MOD[index]);
    }
}

static void parse_conversion(char **str, int *converter)
{
    int index = p_contains(*str, (char **) CONV, 21);
    if (index != -1) {
        *converter |= (1 << (index));
        (*str)++;
    }
}

t_flags parse_flag(char **str, va_list *list)
{
    t_flags res = {0, 0, 0, 0};
    (*str)++;

    parse_comp_flags(str, &res.flags);
    parse_width(str, &res.width, list);

    if (**str == '.') {
        parse_precision(str, &res.precision, *list);
    }

    parse_length_mod(str, &res.flags);
    parse_conversion(str, &res.converter);

    return (res);
}
