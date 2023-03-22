#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints name
 * @name: string
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
