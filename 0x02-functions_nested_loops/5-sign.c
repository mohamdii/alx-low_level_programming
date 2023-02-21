#include <stdio.h>

/**
 * print_sign - prints the sign
 * @n: check number
 *
 * Return: 0 if zero. -1 if negative. otherwise +1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (+1);
	}
	else if (n < 0)
	{
		/*putchar('-');*/
		return (-1);
	}
	else
	{
		/*putchar('0');*/
		return (00);
	}
}
