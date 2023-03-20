#include "dog.h"
/**
 * init_dog - function that intialize struct
 * @d: is a pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

		d->name = name;
		d->age = age;
		d->owner = owner;
}
