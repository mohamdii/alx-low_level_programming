#include <stdio.h>
#include "main.h"

/**
 *  print_alphabet function 
 *
 *  printslower case alphabets 
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
