#include "function_pointers.h"

/**
 * int_index - fuction that searches for an integer
 * @size: no. of elements
 * @array: the array itself
 * @cmp: is a function pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	if (cmp && array)
	{
		while (size > i)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}

