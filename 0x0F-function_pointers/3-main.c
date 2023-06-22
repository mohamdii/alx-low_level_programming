#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

int main(int argc, char *argv[])

{
	int num1, num2, result;
	int (*f)(int, int);
	
	if (argc == 0)
		printf("please insert a number");	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
