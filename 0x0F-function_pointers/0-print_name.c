#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: string
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
