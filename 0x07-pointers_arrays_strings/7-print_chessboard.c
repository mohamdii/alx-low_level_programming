#include "main.h"

/**
 * print_chessboard - prints chess board
 * @a: characters 
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i != 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		j++;
		_putchar('\n');
		i++;
	}
}
