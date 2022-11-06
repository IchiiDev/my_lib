/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** Header file for private functions used for the my_printf implementation.
*/

#ifndef UTIL_H_
    #define UTIL_H_

    #include <stdarg.h>
    #include <stdint.h>

    #include "../internal/flags.h"

    #define IS_NBR(c) (c >= '0' && c <= '9') ? 1 : 0
    #define IS_PRINTABLE(c) (c >= 32 && c < 127) ? 1 : 0

    /**
     * @brief Parse a single flag.
     *
     * @param str Pointer to the start of the flag (after `%`).
     * @return t_flags Parsed flag (or NULL if error)
     */
    t_flags parse_flag(char **str, va_list *list);

    /**
     * @brief This function will return the first number in a string
     *
     * @return int The parsed number returned by the function
     */
    int parse_numbers(char const * str);

    /**
    * @brief Checks if the `source` string starts with the given `str`.
    *
    * @param source String to search in.
    * @param str String to search for.
    * @return int boolean
    */
    int p_starts_with(const char *source, const char *str);

    /**
     * @brief Checks if the `source` string starts with one of the given
     * `elems`.
     *
     * @param source String to search in.
     * @param elems List of strings to search for.
     * @param size Size of `elems`.
     * @return int Index of matched element, `-1` if no match.
     */
    int p_contains(char *source, char **elems, int size);

    /**
     * @brief Get the length of a string.
     *
     * @param str The string.
     * @return int Length of the string.
     */
    int p_str_len(const char *str);

    /** @brief Parse the string as a number.
     *
     * @param str The string to parse.
     * @return int The parsed number (0 if invalid).
     */
    int p_get_nbr(char const *str);

#endif /* !UTIL_H_ */
