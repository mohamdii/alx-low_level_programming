#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: range
 */
int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
		return (NULL);
	j = max - min;
	p = malloc(sizeof(int) * (j + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min != max)
	{
		p[i] = min;
		i++;
		min++;
	}
	p[i] = min;
	return (p);
}
