#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers follower by new line
 * @separator: string to be put bet numbers
 * @n: is the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d",va_arg(ptr, int));
		if (separator == NULL)
		{
		}
		else if (i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ptr);
}
