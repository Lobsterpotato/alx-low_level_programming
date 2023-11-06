#include "dog.h"

/**
 * init_dog - Initializes a struct dog with name, age, and owner.
 * @d: Pointer to the struct dog to initialize.
 * @name: Pointer to a string for the dog's name.
 * @age: The age of the dog.
 * @owner: Pointer to a string for the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
