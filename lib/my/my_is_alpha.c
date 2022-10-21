/*
** EPITECH PROJECT, 2022
** my_lib
** File description:
** my_is_alpha function file
*/

int is_alpha(const char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0;
}
