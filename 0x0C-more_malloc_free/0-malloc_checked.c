#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size of memory to allocate
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *i;

    i = malloc(b);
    if (i == NULL)
    {
        perror("malloc");
        exit(98);
    }
    return (i);
}
