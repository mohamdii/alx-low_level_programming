#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - function that exectutes a function
 * @array: pointer array
 * @size: size of the array
 * @action: is a pointer function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (size > i)
	{
		action(*(array + i));
		i++;
	}
}

