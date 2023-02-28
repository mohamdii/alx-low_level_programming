#include "main.h"

/**
 * rev_string
 * @s: input pointer
 */

void rev_string(char *s)
{
	int i, j;

	i = strlen(s);
	for( j = i - 1; j >= 0; j--)
		*s = s[j];
}
