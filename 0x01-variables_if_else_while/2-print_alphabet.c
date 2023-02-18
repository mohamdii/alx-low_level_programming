#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = " \n";
	char ch;
	
	for(ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar(c);
	return (0);
}
