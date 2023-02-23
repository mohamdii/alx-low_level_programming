#include <stdio.h>

/**
 * main - function to print fizz buzz
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i<= 100; i++)
	{
		if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}

		else if (i % 15 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i > 10)
			putchar((i / 10) + '0');
		else 
			putchar((i % 10) + '0');
	}
	putchar('\n');
}

