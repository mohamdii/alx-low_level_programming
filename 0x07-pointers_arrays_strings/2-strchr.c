#include "main.h"

/**
 * _strchr - function that locates a char in a string
 * @s: string
 * @c: targeted charactar
 *
 * Return: found char
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + i) != '\0')
			{
				*(s + j) = *(s + i);
				j++;
				i++;
			}
			return (s);
		}
		else
		{
			return ('\0');
		}
		i++;
	}
	return ('\0');
}
