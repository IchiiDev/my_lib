/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** padding
*/

#include "lib/string.h"

#include "internal/str.h"

void add_padding(l_string *string, int size, char pad_char, int right)
{
    int pad_size = (size - string->length);
    if (pad_size <= 0)
        return;

    l_string *pad_string = l_string_new(pad_size + 1);
    for (int i = 0; i < pad_size; i++)
        l_string_push(pad_string, pad_char);

    if (right) {
        l_string_extend(string, pad_string);
    } else {
        l_string *string_copy = l_string_copy(string);
        l_string_extend(pad_string, string_copy);
        l_string_replace(string, pad_string);
    }
}
