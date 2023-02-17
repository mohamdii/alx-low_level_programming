#include <stdio.h>
/**
 *this code is made 
 *for measuring sizes of funcionts
 */

int main(void)
{
	char a = "A";
	int b = 2;
	long int c =4;
	long long int d =9;
	float e =2.4;

	printf("Size of a char:%d\n",sizeof(a));
	printf("Size of an int:%d\n",sizeof(b));
	printf("Size of a long int:%d\n",sizeof(c));
	printf("Size of a long long int:%d\n",sizeof(d));
	printf("Size of a float:%d\n",sizeof(e));
	return (0);
}

