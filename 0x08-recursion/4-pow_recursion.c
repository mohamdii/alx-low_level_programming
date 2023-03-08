#include "main.h"

/**
 * _pow_recursion - calculates the power of a number
 * @x: number
 * @y: power to the number
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
