/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** Implementation of dynamically allocated string.
*/

#include <stdlib.h>
#include "my_string.h"

static const int DEFAULT_CAP = 32;

l_string *l_string_new(int capacity)
{
    capacity = capacity <= 0 ? DEFAULT_CAP : capacity;
    l_string *string = malloc(sizeof(l_string));
    if (string == NULL)
        return NULL;

    char *ptr = malloc(sizeof(char) * capacity);
    if (ptr == NULL) {
        free(string);
        return NULL;
    }

    ptr[0] = '\0';

    string->ptr = ptr;
    string->capacity = capacity;
    string->length = 0;

    return (string);
}

l_string *l_string_reserve(l_string *string, int capacity)
{
    if (capacity <= 0)
        return (string);

    int new_capacity = string->capacity + capacity;
    char *new_ptr = malloc(sizeof(char) * new_capacity);

    if (new_ptr == NULL)
        return (NULL);

    for (int i = 0; i < string->length; i++) {
        new_ptr[i] = string->ptr[i];
    }

    free(string->ptr);
    string->ptr = new_ptr;
    string->capacity = new_capacity;

    return (string);
}

void l_string_replace(l_string *string, l_string *other)
{
    string->ptr = other->ptr;
    string->capacity = other->capacity;
    string->length = other->length;
}

l_string *l_string_copy(l_string *string)
{
    l_string *new_string = l_string_new(string->capacity);

    if (new_string == NULL)
        return (NULL);

    for (int i = 0; i <= string->length; i++) {
        new_string->ptr[i] = string->ptr[i];
    }

    new_string->length = string->length;

    return (new_string);
}

void l_string_free(l_string *string)
{
    free(string->ptr);
    free(string);
}
