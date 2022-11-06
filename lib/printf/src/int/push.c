/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** push
*/

#include <stdint.h>

#include "internal/str.h"
#include "lib/string.h"
#include "internal/int.h"
#include "internal/flags.h"

const char NB_CHARS[16] = "0123456789abcdef";
const char NB_CHARS_UPPER[16] = "0123456789ABCDEF";

void push_base(intmax_t value, int_fmt fmt, t_flags flags, l_string *string)
{
    uintmax_t unb = value;
    if (value < 0) {
        l_string_push(string, '-');
        unb = -value;
    } else {
        if (fmt.sign == SIGN_SPACE)
            l_string_push(string, ' ');
        if (fmt.sign == SIGN_ALWAYS)
            l_string_push(string, '+');
    }

    push_ubase(unb, fmt, flags, string);
}

static void push_ubase_rec(
    uintmax_t value, int_fmt fmt, t_flags flags, l_string *string)
{
    if (value > (fmt.base - 1)) {
        push_ubase_rec(value / fmt.base, fmt, flags, string);
    }

    if (fmt.uppercase) {
        l_string_push(string, NB_CHARS_UPPER[value % fmt.base]);
    } else {
        l_string_push(string, NB_CHARS[value % fmt.base]);
    }
}

void push_ubase(uintmax_t value, int_fmt fmt, t_flags flags, l_string *string)
{
    if (fmt.alt == ALT_OCT)
        l_string_push(string, '0');
    if (fmt.alt == ALT_HEX)
        l_string_push_str(string, "0x");
    if (fmt.alt == ALT_HEX_UPPER)
        l_string_push_str(string, "0X");
    if (fmt.alt == ALT_BIN)
        l_string_push_str(string, "0b");

    push_ubase_rec(value, fmt, flags, string);

    if (flags.precision > 0)
        add_padding(string, flags.precision, '0', 0);
}
