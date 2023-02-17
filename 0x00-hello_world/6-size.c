#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

/* creating variables  */
char a = "A";
int b =  2;
long int c = 4;
long long int d = 9;
float e = 2.4;
	
/* Printing size of the variables */	
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of a long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(e));

/*returning the values */
return (0);
}

