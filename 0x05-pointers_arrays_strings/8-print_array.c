#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: checks input
 *
 * @n: checks n input
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));

}
