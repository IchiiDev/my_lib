/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** print
*/

#ifndef PRINT_H_
    #define PRINT_H_

    #include <stdarg.h>
    #include <stdint.h>

    #include "my_string.h"
    #include "internal/flags.h"

    /**
     * @brief Print a flag at the end of the given string.
     *
     * @param flag Flag to print.
     * @param string String to push the flag to.
     * @param list Variadic arguments list.
     */
    void print_flag(t_flags flag, l_string *string, va_list *list);

    /* Generic print functions */

    typedef struct print_s {
        int flag;
        void (*ptr_fn)(t_flags, l_string *, va_list *);
    } print_t;

    void print_int(t_flags flag, l_string *string, va_list *list);

    void print_double_exp(t_flags flag, l_string *string, va_list *list);

    void print_double_dec(t_flags flag, l_string *string, va_list *list);

    void print_double_auto(t_flags flag, l_string *string, va_list *list);

    void print_double_hex(t_flags flag, l_string *string, va_list *list);

    void print_char(t_flags flag, l_string *string, va_list *list);

    void print_str(t_flags flag, l_string *string, va_list *list);

    void print_str_oct(t_flags flag, l_string *string, va_list *list);

    void print_ptr(t_flags flag, l_string *string, va_list *list);

    void print_count(t_flags flag, l_string *string, va_list *list);

    void print_percent(t_flags flag, l_string *string, va_list *list);

    /**
     * @brief Get a signed number from vargs according to the flags.
     *
     * @param flags Flags to use.
     * @param list Varargs list.
     * @return intmax_t The number.
     */
    intmax_t length_mod_signed(t_flags flags, va_list *list);

    /**
     * @brief Get an unsigned number from vargs according to the flags.
     *
     * @param flags Flags to use.
     * @param list Varargs list.
     * @return uintmax_t The number.
     */
    uintmax_t length_mod_unsigned(t_flags flags, va_list *list);

#endif /* !PRINT_H_ */
