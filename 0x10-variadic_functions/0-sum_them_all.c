#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fucntion that sum ints
 * @n: constant number
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
