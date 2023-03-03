#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, x, z, y;

	y = 0;
	x = 0;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		x = s1[i] + x;
		i++;
	}
	while (s2[j] != '\0')
	{
		y = s2[j] + y;
		j++;
	}
	z = x - y;
	if (i == j)
		return (0);
	else
	{
		return (z);
	}
}
