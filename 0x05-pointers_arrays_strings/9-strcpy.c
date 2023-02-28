#include "main.h"

/**
 * _strcpy - function that copies strings elimination \0
 * @dest: checks input
 *
 * @src: checks sourse
 * Return: string dest 
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
