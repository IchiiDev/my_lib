/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** conv_length
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>

#include "internal/print.h"
#include "internal/flags.h"

intmax_t length_mod_signed(t_flags flags, va_list *list)
{
    if ((flags.flags & L_CHAR) || (flags.flags & L_SHORT))
        return (intmax_t) va_arg(*list, int);
    if (flags.flags & L_LONGLONG)
        return (intmax_t) va_arg(*list, long long);
    if (flags.flags & L_LONG)
        return (intmax_t) va_arg(*list, long);
    if (flags.flags & L_INTMAX)
        return (intmax_t) va_arg(*list, intmax_t);
    if (flags.flags & L_SIZE)
        return (intmax_t) va_arg(*list, ssize_t);
    if (flags.flags & L_PTRDIFF)
        return (intmax_t) va_arg(*list, ptrdiff_t);

    return (intmax_t) va_arg(*list, int);
}

uintmax_t length_mod_unsigned(t_flags flags, va_list *list)
{
    if ((flags.flags & L_CHAR) || (flags.flags & L_SHORT))
        return (uintmax_t) va_arg(*list, unsigned int);
    if (flags.flags & L_LONGLONG)
        return (uintmax_t) va_arg(*list, unsigned long long);
    if (flags.flags & L_LONG)
        return (uintmax_t) va_arg(*list, unsigned long);
    if (flags.flags & L_INTMAX)
        return (uintmax_t) va_arg(*list, uintmax_t);
    if (flags.flags & L_SIZE)
        return (uintmax_t) va_arg(*list, size_t);
    if (flags.flags & L_PTRDIFF)
        return (uintmax_t) va_arg(*list, ptrdiff_t);

    return (uintmax_t) va_arg(*list, unsigned int);
}
