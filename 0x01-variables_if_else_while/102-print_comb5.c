#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i > j)
				continue;
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (k > l)
						continue;
					putchar((i) + '0');
					putchar((j) + '0');
					putchar(' ');
					putchar((k) + '0');
					putchar((l) + '0');
					if (i == 9 && j == 9 && k == 9 && l == 9)
					{
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
