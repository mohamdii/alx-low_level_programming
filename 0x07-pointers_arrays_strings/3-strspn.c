#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: string 1
 * @accept: string 2
 *
 * Return: number of char
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, y;

	i = 0;
	y = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ',')
			break;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				y++;
			}
			j++;
		}
		i++;
	}
	return (y);
}
