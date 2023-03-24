#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_strings - functiosn that prints a string
 * @separator: is a string
 * @n: number of char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *p;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ptr, char *);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator && n - 1 > i)
			printf("%s", separator);
	}
	printf("\n");	
	va_end(ptr);
}
