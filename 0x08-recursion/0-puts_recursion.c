#include "main.h"

/** _puts_recursion - function that prints 
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*(s + i) == '\0')
		return;
	putchar(*s);
	_puts_recursion(s + 1);
}
