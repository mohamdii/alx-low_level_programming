#include "main.h"

/**
 * print_rev - prints function in reverse
 * @s: input variable
 */

void print_rev(char *s)
{
	char i;

	for (i = 62; i >= 0; i--)
		_putchar(*(s + i));
	putchar('\n');
}
