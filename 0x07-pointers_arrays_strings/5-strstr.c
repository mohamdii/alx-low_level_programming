#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle:second string
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(needle + i) != '\0')
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(haystack + j) == *(needle + i))
				return ((needle + i));
			j++;
		}
		i++;
	}
	return ('\0');
}
