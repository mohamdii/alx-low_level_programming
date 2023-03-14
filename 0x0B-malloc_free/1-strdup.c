#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns the pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: Pointer char
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	p = malloc(sizeof(str) * i);
	if (str == NULL)
		return (NULL);
	while (j != i)
	{
		*(p + j) = str[j];
		j++;
	}
	return (p);
}
