#include "main.h"
/**
 * print_last_digit - function prints last digit
 * @x: check number
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int z;

	if (x < 0)
	{
		x = x * -1;
	}
	z = x % 10;
	if (z < 0)
	{
		z = z * -1;
	}
	_putchar(z + '0');
	return (z);
}
