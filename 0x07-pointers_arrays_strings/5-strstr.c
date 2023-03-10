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
			if (*(needle + i) == *(haystack + j))
				return (haystack + j);
			j++;
		}
		i++;
	}
	*(haystack + 0) = '\0';
	return ((haystack + 0));
}
