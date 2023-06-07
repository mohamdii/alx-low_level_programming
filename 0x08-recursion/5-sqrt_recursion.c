#include "main.h"

int sqcheck(int number, int number1)
{
	if (number * number == number1)
		return (number);
	if (number * number > number1)
		return (-1);
	return (sqcheck(number + 1, number1));
}
/**
 * _sqrt_recursion - calculates sqrt
 * @n: number to be calculated
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return(sqcheck(1, n));

}
