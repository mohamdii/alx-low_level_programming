#include "main.h"
#include <string.h>
#include "2-strlen.c"
/**
 * print_rev - prints function in reverse
 * @s: input variable
 */

void print_rev(char *s)
{
	int y;

	for (y = _strlen(s) - 1; y >= 0; y--)
	{
		putchar(*(s + y));
	}
	putchar('\n');
}
