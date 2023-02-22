#include "main.h"

/**
 * jack_bauer - function
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 59; k++)
			{
				if (k <= 9)
				{
					l = 0;
					printf("%d%d:%d%d\n", i, j, l, k);
				}
				else
					printf("%d%d:%d\n", i, j, k);
			}
		}
	}
}
