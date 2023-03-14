#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array with specific chars
 * @size: size of the array
 * @c: the specific charactar
 * 
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return('\0');
	else
	{
		p = malloc(sizeof(int) * size);
		if (p == NULL)
			return ('\0');
		while (i != size)
		{
			p[i] = c;
			i++;
		}
		return (p);
	}
}
