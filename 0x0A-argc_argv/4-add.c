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
	int i, x, sum, c;
	char *p;
	
	sum = 0;
	c = 0;

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		x = 0;
		while (p[x] != '\0')
			{
				if (p[x] < '0' || p[x] > '9')	
				{
						printf("Error\n");
						return (1);
				}
				x++;
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
