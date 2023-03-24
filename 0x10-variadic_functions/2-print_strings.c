#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * print_strings - functiosn that prints a string
 * @separator: is a string
 * @n: number of char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%c %s", va_arg(ptr, int), separator);
	}
	
	va_end(ptr);
}
