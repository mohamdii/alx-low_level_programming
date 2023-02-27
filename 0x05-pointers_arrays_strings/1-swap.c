#include "main.h"

/**
 * swap_int - function that swaps the values
 * @a: checks first number
 * @b: checks second number
 */
void swap_int(int *a, int *b)
{
	int d, c;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
