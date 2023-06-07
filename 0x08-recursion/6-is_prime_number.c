#include "main.h"

/**
 * is_prime_number - checks if prime or no
 * @n: input number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	if (n % 2 == 1)
		return (1);
	else
		return (0);
}
