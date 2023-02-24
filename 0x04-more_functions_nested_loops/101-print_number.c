#include "main.h"

/**
 * print_number - function to print numbers
 * @n: check number
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}	

	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
