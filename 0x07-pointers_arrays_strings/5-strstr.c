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

	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(needle + j) != '\0')
		{
			if (*(haystack + j) == *(needle + i))
				return ((haystack + j));
			j++;
		}
		i++;
	}
	return ('\0');
}
