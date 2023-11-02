#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: a pointer to a newly allocated string
 * If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    size_t s1_len, s2_len;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    result = malloc(s1_len + (n < s2_len ? n : s2_len) + 1);
    if (result == NULL)
        return (NULL);

    strcpy(result, s1);
    strncat(result, s2, n < s2_len ? n : s2_len);
    return (result);
}
