/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf main function file
*/

#include <stdarg.h>
#include <unistd.h>

#include "lib/string.h"

#include "internal/flags.h"
#include "internal/parse.h"
#include "internal/print.h"

static void format_char(l_string *string, char **str, va_list *list)
{
    if (**str == '%') {
        t_flags flag = parse_flag(str, list);
        print_flag(flag, string, list);
    } else {
        l_string_push(string, **str);
        (*str)++;
    }
}

static l_string *printf_internal(const char *format, va_list *list)
{
    l_string *string = l_string_new(0);

    while (*format) {
        format_char(string, (char **) &format, list);
    }

    return (string);
}

int my_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);

    l_string *string = printf_internal(format, &list);
    va_end(list);

    int length = string->length;
    write(1, string->ptr, length);
    l_string_free(string);

    return (length);
}

int my_sprintf(char *str, const char *format, ...)
{
    va_list list;
    va_start(list, format);

    l_string *string = printf_internal(format, &list);
    va_end(list);

    int length = string->length;
    for (int i = 0; i < length; i++) {
        str[i] = string->ptr[i];
    }

    str[length] = '\0';
    l_string_free(string);

    return (length);
}
