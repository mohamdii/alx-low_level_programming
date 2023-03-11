#include <stdio.h>

/**
 * main - main function
 * @argc: counter
 * @argv: vector
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
