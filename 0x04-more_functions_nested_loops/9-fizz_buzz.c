#include <stdio.h>

/**
 * main - function to print fizz buzz
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}

