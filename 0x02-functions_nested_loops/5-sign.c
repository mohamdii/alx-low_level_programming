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
		return (1);
		putchar('+');
	}
	else if (n < 0)
	{
		return (1);
		putchar('-');
	}
	else 
	{
		return (0);
	}
}
