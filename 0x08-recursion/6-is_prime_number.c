#include "main.h"
/**
 * prime_check - function checks prime numbers
 * @n1: number 1
 * @n2: base number to check
 * Return: if its prime its 1, other wise 0
int prime_check(int n1, int n2)
{
	if (n2 % n1 == 0 || n2 < 2)
		return (0);
	else if (n1 == n2 -1)
		return (1);
	else if (n2 > n1)
		return (prime_check(n + 1, n2));
}
/**
 * is_prime_number - checks if prime or no
 * @n: input number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (checker(2, n);
}
