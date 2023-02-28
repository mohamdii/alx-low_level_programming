#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints function in reverse
 * @s: input variable
 */

void print_rev(char *s)
{
	char x;
	char i;

	i = _strlen(s);
	for (x = i; i >= 0; i--)
		putchar(s + i);
	putchar('\n');
}
