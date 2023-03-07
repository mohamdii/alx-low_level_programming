#include "main.h"

/**
 * _strpbrk - function locates 1st occurance
 * @s: string
 * @accept: string
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				return ((s + i));
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

