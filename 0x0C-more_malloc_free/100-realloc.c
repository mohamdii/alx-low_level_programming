#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * return (pointer)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (old_size < new_size)
		n = old_size;
	else
		n = new_size;
	memcpy(p, ptr, n);
	free(ptr);
	return (p);
}
