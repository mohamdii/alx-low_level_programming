#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: check size
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i >=  1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
