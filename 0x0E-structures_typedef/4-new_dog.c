#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy;
    char *owner_copy;

    /* allocate memory for the new dog struct */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* allocate memory and copy name */
    name_copy = malloc(sizeof(char) * (strlen(name) + 1));
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(name_copy, name);

    /* allocate memory and copy owner */
    owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    /* assign values to the new dog struct */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
