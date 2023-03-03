#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, z, l, m;

	z = 0;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		l = s1[i] + l;
		m = s2[j] + m;
		z = l - m;
		if (l == m)
			continue;
		else if (s2[j] == '\0' && s2[i] == '\0')
			return (0);
		return (z);
		i++;
		j++;
	}
	z = 0;
	while (s2[j] != '\0')
	{
		l = s1[i] + l;
		m = s2[j] + m;
		z = l - m;
		if (l == m)
			continue;
		else if (s2[j] == '\0' && s2[i] == '\0')
			return (0);
		if (z > 0 || z < 0)
			return (z);
		i++;
		j++;
	}
	return (0);
}
