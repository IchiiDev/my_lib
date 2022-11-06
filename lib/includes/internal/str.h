/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** str
*/

#ifndef STR_H_
    #define STR_H_

    #include "my_string.h"

    /**
     * @brief Add padding to the given string if its length is less than
     * `size`.
     *
     * @param string String to add the padding to.
     * @param size Target size of the string (after padding).
     * @param pad_char Character to use for the padding.
     * @param right `1` if the string is right-padded (left by default).
     */
    void add_padding(l_string *string, int size, char pad_char, int right);

#endif /* !STR_H_ */
