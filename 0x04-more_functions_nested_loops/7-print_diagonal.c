#include "main.h"

/**
 * print_diagonal - function to print slashes diagonally
 * @n: number of spaces
 */
void print_diagonal(int n)
{
	int i;
	int z;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (z = 0; z < i; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
