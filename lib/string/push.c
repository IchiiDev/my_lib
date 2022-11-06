/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** Implementation of dynamically allocated string.
*/

#include <stdlib.h>
#include "my_string.h"

l_string* l_string_push(l_string *string, char c)
{
    if (string->length >= (string->capacity - 1)) {
        string = l_string_reserve(string, string->capacity);

        if (string == NULL)
            return (NULL);
    }

    string->ptr[string->length] = c;
    string->ptr[string->length + 1] = '\0';
    string->length++;

    return (string);
}

l_string *l_string_push_str(l_string *string, char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        string = l_string_push(string, str[i]);

        if (string == NULL)
            return (NULL);
    }

    return (string);
}

l_string* l_string_extend(l_string *string, l_string *other)
{
    if (string->length + other->length >= (string->capacity - 1)) {
        int capacity = other->length - (string->capacity - string->length - 1);
        string = l_string_reserve(string, capacity);

        if (string == NULL)
            return (NULL);
    }

    for (int i = 0; i < other->length; i++) {
        string->ptr[string->length] = other->ptr[i];
        string->length++;
    }

    string->ptr[string->length] = '\0';
    l_string_free(other);

    return (string);
}
