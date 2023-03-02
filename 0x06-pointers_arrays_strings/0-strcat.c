#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: first + second string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return(dest);	
}
