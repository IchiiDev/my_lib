/*
** EPITECH PROJECT, 2022
** cpoolday06
** File description:
** my_strcmp function file
*/

int my_strncmp(char const *s1, char const *s2)
{
    int pointer = 0;
    while (s1[pointer] == s2[pointer]) {
        if (s1[pointer] == '\0' || s2[pointer] == '\0') {
            return 0;
        }
        pointer += 1;
    }

    return s1[pointer - 1] - s2[pointer - 1];
}
