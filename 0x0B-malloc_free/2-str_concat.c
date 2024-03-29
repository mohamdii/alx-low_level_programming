#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, k = 0, y = 0;

	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
			i++;
	}
	else if (s1 == NULL)
		s1 = NULL;
	if (s2 != NULL)
		while (*(s2 + j) != '\0')
			j++;
	else if (s2 == NULL)
		s2 = NULL;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	while (k != i)
	{
		*(p + k) = s1[k];
		k++;
	}
	while (y != j)
	{
		*(p + k) = s2[y];
		k++;
		y++;
	}
	return (p);
}
