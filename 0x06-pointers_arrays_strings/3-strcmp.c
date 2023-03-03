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
	int i, j;
	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++; 
			j++;
		}
		else
		{
			return s1[i] - s2[j];
		}
	}
	return (0);
}
