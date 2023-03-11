#include <stdio.h>

/**
 * main - function prints arguments recieved
 * @argc: arg count
 * @argv: vector
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
				
