#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that calculate change
 * @argc: no. of argument
 * @argv: number of variables
 *
 * Return: if success returns 0
 */

int main(int argc, char **argv)
{
	int sum, ch;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	ch = atoi(argv[1]);

	for (sum = 0; ch > 0; sum++)
	{
		if (ch - 25 >= 0)
			ch = ch - 25;
		else if (ch - 10 >= 0)
			ch = ch - 10;
		else if (ch - 5 >= 0)
			ch = ch - 5;
		else if (ch - 2 >= 0)
			ch = ch - 2;
		else if (ch - 1 >= 0)
			ch = ch - 1;
	}
	printf("%d\n", sum);
	return (0);
}
