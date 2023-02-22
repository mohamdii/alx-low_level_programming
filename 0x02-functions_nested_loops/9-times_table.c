#include "main.h"

/**
 * time_table - function for 9 times table
 */
void times_table(void)
{
	int i;

	for (i =0; 0 <= 9; i++)
	{
		i = i * 9;
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
