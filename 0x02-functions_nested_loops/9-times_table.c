#include "main.h"

/**
 * time_table - function for 9 times table
 */
void times_table(void)
{
	int i, k;

	for (i =0; i <= 9; i++)
	{
			k = i * 2;
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		putchar('\n');
	}
	_putchar('\n');
}
