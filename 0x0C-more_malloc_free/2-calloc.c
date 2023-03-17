#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	p = malloc(size * nmemb);
	return (p);
}
