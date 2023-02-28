#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @str: checks input
 */

void puts_half(char *str)
{
	int i,j;

	i = _strlen(str);

	if (i % 2 == 0)
	{
		for (j = (i / 2); j <= i; j++)
			putchar(*(str + j));
	}
	else
		for (j = (i - 1) / 2; j <= i; j++)
	{
		putchar(*(str + j));
	}
	putchar('\n');
}
