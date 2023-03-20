#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	char *p, *x;
	int i = 0;

	while(*(name + i) != '\0')
	{
		*(p + i) = name[i];
		i++;
	}
	i = 0;
	while (*(owner + i) != '\0')
	{
		*(x + i) = owner[i];
		i++;
	}
	return (NULL);
}
