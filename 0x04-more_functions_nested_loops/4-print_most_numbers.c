#include "main.h"

/**
 * print_most_number - prints 1-9 except 2 & 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ( i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
