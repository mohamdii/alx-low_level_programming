#include "main.h"

/**
 * jack_bauer - function
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 23; i++)
	{
			for (k = 0; k <= 59; k++)
			{
				if (k <= 9 && i <= 9)
                                {
                                        j = 0;
					l = 0;
                                        printf("%d%d:%d%d\n", j, i, l, k);
                                }
                                else if (k <=9 && i > 9)
				{
                                        l = 0;
                                        printf("%d:%d%d\n", i, l, k);
				}
				else if (i <= 9 && k > 9)
				{
					k = 0;
					printf("%d%d:%d\n", j, i, k);
				}
				else
					printf("%d:%d", i, k);
			}
	}
}
