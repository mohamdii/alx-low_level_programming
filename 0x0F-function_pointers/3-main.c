#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - function that adds args
 * @argc: is the number of args
 * @*argv: is the string
 * Return: integer
 */

int main(int argc, char *argv[])

{
	int num1, num2, result;
	char op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("please insert a number");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = *argv[2];
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
