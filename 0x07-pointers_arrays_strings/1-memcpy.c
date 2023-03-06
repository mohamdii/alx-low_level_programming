#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: 1st memory area
 * @src: copied string
 * @n: how many times to be copied
 *
 * Return: char string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
