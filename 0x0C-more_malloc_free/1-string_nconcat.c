#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, len_s1, len_s2;
    char *new_str;

    if (!s1)
        s1 = "";
    if (!s2)
        s2 = "";

    len_s1 = string_length(s1);
    len_s2 = string_length(s2);

    new_str = malloc(sizeof(char) * (len_s1 + n + 1));
    if (!new_str)
        return (NULL);

    for (i = 0; i < len_s1; i++)
        new_str[i] = s1[i];

    for (i = 0; i < n && i < len_s2; i++)
        new_str[len_s1 + i] = s2[i];

    new_str[len_s1 + n] = '\0';

    return (new_str);
}
