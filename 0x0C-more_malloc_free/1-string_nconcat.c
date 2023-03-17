#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - cocatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes in the second string
 * 
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, *x;
	int i;
	unsigned int j;

	x = "";
	if (s1 == NULL)
		s1 = x;
	if (s2 == NULL)
		s2 = x;
	i = 0;
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(s1 + j) != '\0')
	{
		j++;
	}
	if ( j + 1 < n )
		n = j;
	p = malloc(sizeof(char) * (i + n));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		p[i] = s2[j];
		if (j == n)
			break;
		i++;
		j++;
	}
	return (p);
}