#include "main.h"

/**
 * _strcpy - function that copies strings elimination \0
 * @dest: checks input
 *
 * @src: checks sourse
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = strlen(src);
	i = 0;
	while (i != j)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}	
