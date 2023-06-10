#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds postitve numbers
 * @argc: counter
 * @argv: vector
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, j, sum, c;
	char *p;

	sum = 0;
	c = 0;

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		j = 0;
		while (p[j] != '\0')
		{
			if (p[j] < '0' || p[j] > '9')
			{
					printf("Error\n");
					return (1);
			}
			j++;
		}
		i++;
	}
	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		sum = sum + c;
	}
	printf("%d\n", sum);
	return (0);
}
