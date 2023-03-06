#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a char in a string
 * @s: string
 * @c: targeted charactar
 *
 * Return: found char
 */
char *_strchr(char *s, char c)
{
	int i = 0 , j = 0;
	char *x = '\0';

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + i) != '\0')
			{
				*(x + j) = *(s + i);
				j++;
				i++;
			}
			*(x + j) = '\0';
			return (x);
		}
		i++;
	}
	return (x);
}
