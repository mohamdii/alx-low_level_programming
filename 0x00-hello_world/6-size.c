#include <stdio.h>
/**
 *this code is made 
 *for measuring sizes of funcionts
 */

int main(void)
{
	char a = 'A';
	int b = 2;
	long int c =4;
	long long int d =9;
	float e =2.4;

	printf("Size of a char:%c",sizeof(a));
	printf("Size of an int:%d",sizeof(b));
	printf("Size of a long int:%d",sizeof(c));
	printf("Size of a long long int:%d",sizeof(d));
	printf("Size of a float:%d",sizeof(e));
	return (0);
}

