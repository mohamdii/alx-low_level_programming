#include "main.h"
#include <string.h>

/**
 * _strncat - function concatenates
 * @dest: 1st string
 * @src: 2nd string
 * @n: integer
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = strlen(src);
	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	if (len < n)
	{
		while (len != j)
		{
			*(dest + i) = *(src + j);
			j++;
			i++;
		}
	}
	else
	{
	while (*(src + j) != '\0')
	{
		if (j == n)
			break;
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	}
	return (dest);
}
