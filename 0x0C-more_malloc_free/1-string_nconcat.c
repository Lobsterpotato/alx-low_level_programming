#include <stdlib.h>
#include "main.h"


/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
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
