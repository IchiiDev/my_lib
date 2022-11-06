/*
** EPITECH PROJECT, 2022
** epitech-lib
** File description:
** Implementation of dynamically allocated string.
*/

#ifndef L_STRING_H_
    #define L_STRING_H_

    /**
     * @brief Dynamically allocated string.
     *
     * This type hold a dynamically allocated string. If appending to the
     * string would cause it to exceed its capacity, the capacity is
     * increased by a factor of 2.
     *
     * The string is guaranteed to end with a null byte ('\0').
     */
    typedef struct l_string_s {
        char *ptr;
        int capacity;
        int length;
    } l_string;

    /**
     * @brief Allocates a new string in memory.
     *
     * @param capacity Capacity to allocate. A default capacity of 32 is used
     * the provided capacity is zero.
     * @return string_t* Allocated string (NULL if allocation error).
     */
    l_string *l_string_new(int capacity);

    /**
     * @brief Allocate additional capacity for a string.
     *
     * @param capacity Additional capacity to allocate.
     * @return string_t* NULL if allocation error.
     */
    l_string *l_string_reserve(l_string *string, int capacity);

    /**
     * @brief Append a character to the string.
     *
     * @param c Character to append.
     * @return string_t* Null if allocation error.
     */
    l_string* l_string_push(l_string *string, char c);

    /**
     * @brief Append a char* to the string.
     *
     * @param str String to append.
     * @return string_t* NULL if allocation error.
     */
    l_string *l_string_push_str(l_string *string, char *str);

    /**
     * @brief Append a string to another string. The second string will be
     * freed and should not be used after this call.
     *
     * @param other String to append.
     * @return string_t* NULL if allocation error.
     */
    l_string* l_string_extend(l_string *string, l_string *other);

    /**
     * @brief Copy a string.
     *
     * @param string String to copy.
     * @return string_t* Copy of the string (NULL if allocation error).
     */
    l_string* l_string_copy(l_string *string);

    /**
     * @brief Replace a string with another string.
     *
     * @param string String that will be overwritten.
     * @param other String to replace with.
     * @return l_string* NULL if allocation error.
     */
    void l_string_replace(l_string *string, l_string *other);

    /**
     * @brief Free a string.
     *
     * @param string String to free.
     */
    void l_string_free(l_string *string);

#endif /* !L_STRING_H_ */
