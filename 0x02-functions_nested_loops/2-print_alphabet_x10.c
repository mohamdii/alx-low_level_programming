#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
/**
 * print_alphabet_x10 - to print alpabets 10 times
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(j);
		putchar('\n');
	}
}
