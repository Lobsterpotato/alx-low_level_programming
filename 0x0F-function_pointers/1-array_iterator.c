#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: an array of integers
 * @size: size of the array
 * @action: a pointer to a function that takes an integer as a parameter
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        size_t i;

        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
