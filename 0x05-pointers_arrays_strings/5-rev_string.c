#include "main.h"

/**
 * rev_string - reverses string
 * @s: input pointer
 */

void rev_string(char *s)
{
	int i, j, y, c;

	y = 0;
	i = strlen(s);
	for (j = i - 1; j  >= i / 2; j--, y++)
	{
		c = s[y];
		*(s + y) = s[j];
		*(s + j) = c;
	}
}
