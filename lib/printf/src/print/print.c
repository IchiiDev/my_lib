/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** print
*/

#include <stdarg.h>

#include "lib/string.h"
#include "internal/print.h"
#include "internal/flags.h"

void print_noop(t_flags flag, l_string *string, va_list *list);

static const print_t PRINT_FNS[] = {
    {C_INT, print_int},
    {C_INT_ALT, print_int},
    {C_OCTAL, print_int},
    {C_UINT, print_int},
    {C_HEX, print_int},
    {C_HEX_UPPER, print_int},
    {C_D_EXP, print_noop}, // print_double_exp
    {C_D_EXP_UPPER, print_noop}, // print_double_exp
    {C_D_DEC, print_noop}, // print_double_dec
    {C_D_DEC_UPPER, print_noop}, // print_double_dec
    {C_D_AUTO, print_noop}, // print_double_auto
    {C_D_AUTO_UPPER, print_noop}, // print_double_auto
    {C_D_HEX, print_noop}, // print_double_hex
    {C_D_HEX_UPPER, print_noop}, // print_double_hex
    {C_BIN, print_int},
    {C_CHAR, print_str},
    {C_STR, print_str},
    {C_STR_OCT, print_str_oct},
    {C_PTR, print_ptr},
    {C_COUNT, print_count},
    {C_PERCENT, print_percent},
};

void print_noop(t_flags flag, l_string *string, va_list *list)
{
    l_string_push_str(string, "[todo]");
}

void print_flag(t_flags flag, l_string *string, va_list *list)
{
    if (flag.converter == 0)
        return;

    for (int i = 0; i < 21; i++) {
        print_t print_fn = PRINT_FNS[i];

        if (flag.converter & print_fn.flag) {
            print_fn.ptr_fn(flag, string, list);
        }
    }
}
