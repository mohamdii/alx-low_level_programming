#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that multiplies numbers
 * @argc: counter
 * @argv: vector
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error");
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
