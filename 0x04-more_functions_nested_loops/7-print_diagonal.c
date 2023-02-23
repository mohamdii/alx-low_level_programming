#include "main.h"

/**
 * print_diagonal - function to print slashes diagonally
 * @n: number of spaces
 */
void print_diagonal(int n)
{
	int i, z;

	if ( n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (z = 1; z <= i; z++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
