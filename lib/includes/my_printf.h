/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** Header file for all utility functions
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

    #include <stdarg.h>
    #include "my_string.h"

    /**
     * @brief Print a formatted string to stdout.
     *
     * @param format The format string.
     * @param ... The arguments to print.
     * @return int The number of characters printed.
     */
    int my_printf(const char *restrict format, ...);

    /**
     * @brief Write a formatted string to another string.
     *
     * @param str The string to write the result to.
     * @param format The format string.
     * @param ... The arguments to print.
     * @return int The number of characters written.
     */
    int my_sprintf(char *str, const char *format, ...);

#endif /* !MY_PRINTF_H_ */
