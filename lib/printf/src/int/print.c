/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** print
*/

#include <stdarg.h>
#include <stdint.h>

#include "lib/string.h"

#include "internal/flags.h"
#include "internal/print.h"
#include "internal/int.h"

void print_int(t_flags flags, l_string *string, va_list *list)
{
    l_string *int_string = l_string_new(0);
    int_fmt fmt = {
        get_base(flags),
        get_uppercase(flags),
        get_sign_kind(flags),
        get_alt_kind(flags),
    };

    if (is_signed(flags)) {
        intmax_t value = length_mod_signed(flags, list);
        push_base(value, fmt, flags, int_string);
    } else {
        uintmax_t value = length_mod_unsigned(flags, list);
        push_ubase(value, fmt, flags, int_string);
    }

    l_string_extend(string, int_string);
}

void print_count(t_flags flag, l_string *string, va_list *list)
{
    int *count = va_arg(*list, int *);
    *count = string->length;
}

void print_ptr(t_flags flags, l_string *string, va_list *va)
{
    uintmax_t ptr = va_arg(*va, uintptr_t);
    int_fmt fmt = {16, 0, SIGN_DEFAULT, ALT_HEX};
    push_ubase(ptr, fmt, flags, string);
}
