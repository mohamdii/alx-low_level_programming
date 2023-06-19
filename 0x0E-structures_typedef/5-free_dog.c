#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that free memory
 * @d: pointer to struct
 * Return: returns name
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
