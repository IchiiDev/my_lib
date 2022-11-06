/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** int
*/

#ifndef INT_H_
    #define INT_H_

    #include <stdint.h>
    #include "my_string.h"
    #include "internal/flags.h"

    typedef enum sign_kind_e {
        SIGN_DEFAULT,
        SIGN_SPACE,
        SIGN_ALWAYS,
    } sign_kind;

    typedef enum alt_kind_s {
        ALT_NONE,
        ALT_OCT,
        ALT_HEX,
        ALT_HEX_UPPER,
        ALT_BIN,
    } alt_kind;

    /**
     * @brief Format used to print a number.
     *
     * @param base Base to format the string in (2 <= base <= 16)
     * @param uppercase `1` if letters should be uppercase.
     * @param sign Sign display format.
     */
    typedef struct int_fmt_s {
        int base;
        int uppercase;
        sign_kind sign;
        alt_kind alt;
    } int_fmt;

    /**
     * @brief Push a number formatted with a specific base into a string.
     */
    void push_base(
        intmax_t value, int_fmt fmt, t_flags flags, l_string *string);

    /**
     * @brief Push an unsigned number formatted with a specific base into a
     * string.
     */
    void push_ubase(
        uintmax_t value, int_fmt fmt, t_flags flags, l_string *string);

    int get_base(t_flags flags);
    int get_uppercase(t_flags flags);
    sign_kind get_sign_kind(t_flags flags);
    alt_kind get_alt_kind(t_flags flags);
    int is_signed(t_flags flags);

#endif /* !INT_H_ */
