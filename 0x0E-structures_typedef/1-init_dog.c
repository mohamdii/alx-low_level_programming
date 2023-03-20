#include "dog.h"
/**
 * init_dog - intialize a struct dog variable
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 *
 * Return: return void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
