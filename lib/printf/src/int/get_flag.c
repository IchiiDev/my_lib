/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** get_flag
*/

#include "internal/flags.h"
#include "internal/int.h"

int get_base(t_flags flags)
{
    if (flags.converter & C_OCTAL)
        return (8);
    if (flags.converter & (C_HEX | C_HEX_UPPER))
        return (16);
    if (flags.converter & C_BIN)
        return (2);
    return (10);
}

int get_uppercase(t_flags flags)
{
    if (flags.converter & C_HEX_UPPER)
        return (1);

    return (0);
}

sign_kind get_sign_kind(t_flags flags)
{
    if (flags.flags & F_POS)
        return SIGN_SPACE;

    if (flags.flags & F_SIGN)
        return SIGN_ALWAYS;

    return (SIGN_DEFAULT);
}

alt_kind get_alt_kind(t_flags flags)
{
    if (flags.flags & F_ALT) {
        if (flags.converter & C_OCTAL && !(flags.flags & F_ZEROS) )
            return (ALT_OCT);

        if (flags.converter & C_HEX)
            return (ALT_HEX);

        if (flags.converter & C_HEX_UPPER)
            return (ALT_HEX_UPPER);

        if (flags.converter & C_BIN)
            return (ALT_BIN);
    }

    return (ALT_NONE);
}

int is_signed(t_flags flags)
{
    if (flags.converter & (C_OCTAL | C_UINT | C_HEX | C_HEX_UPPER | C_BIN))
        return (0);

    return (1);
}
