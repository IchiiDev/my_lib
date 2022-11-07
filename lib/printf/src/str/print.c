/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** print str function file
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>

#include "my_string.h"

#include "internal/flags.h"
#include "internal/int.h"

static void precision_print(l_string *string, char *str, int precision)
{
    for (int i = 0; i < precision && str[i] != '\0'; i++) {
        l_string_push(string, str[i]);
    }
}

void print_str(t_flags flags, l_string *string, va_list va)
{
    if (flags.converter & C_STR) {
        char *str = va_arg(va, char *);
        if (flags.precision > 0) {
            precision_print(string, str, flags.precision);
        } else
            l_string_push_str(string, str);
    }

    if (flags.converter & C_CHAR) {
        char c = va_arg(va, int);
        l_string_push(string, c);
    }
}

void print_str_oct(t_flags flags, l_string *string, va_list va)
{
    char * str = va_arg(va, char *);
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] >= 32 && str[i] < 127)
            l_string_push(string, str[i]);
        else {
            l_string_push(string, '\\');
            char c = str[i];
            int_fmt fmt = {8, 0, SIGN_DEFAULT, ALT_NONE};
            push_base(c, fmt, flags, string);
        }
    }
}

void print_percent(t_flags flags, l_string *string, va_list va)
{
    l_string_push(string, '%');
}
