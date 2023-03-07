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
	int i = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == needle[0])
			return((needle + 0));
		i++;
	}
	return ('\0');
}
