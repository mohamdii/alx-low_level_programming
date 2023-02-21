#include <stdio.h>
#include "main.h"

/**
 * this function is to 
 *
 * print lower case alphabets
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
