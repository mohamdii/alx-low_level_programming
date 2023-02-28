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

	for (y = _strlen(s); y >= 0; y--)
	{
		printf("%c",*(s + y));
	}
	putchar('\n');
}
