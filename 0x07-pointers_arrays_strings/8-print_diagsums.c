#include "main.h"

/**
 * print_diagsums - sums two diagonals
 * @a: integers
 * size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, x = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				x = a[i][j] + x;
			_putchar(x);
			j++;
		}
		i++;
	}
}

