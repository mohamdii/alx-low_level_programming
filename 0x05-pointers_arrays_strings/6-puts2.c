#include "main.h"

/**
 * puts2 - prints every other characters
 * @str: checks inputs
 */

void puts2(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = 0; j - 1 >= i; i = i + 2)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}

