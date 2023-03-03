#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: where its copied
 * @src: the copy
 * @n: number of char to be copied
 *
 * Return: the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while(*(dest + i) != '\0')
	{
		i++;
	}
	if (i < n)
		while (i != n)
		{
			*(dest + i) = '\0';
			i++;
		}
	if (i >= n)
		*(dest + i) = '\0';
	return (dest);
}
