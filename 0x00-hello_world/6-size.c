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

	printf("Size of a char:%d byte(s)\n",sizeof(a));
	printf("Size of an int:%d byte(s)\n",sizeof(b));
	printf("Size of a long int:%d byte(s)\n",sizeof(c));
	printf("Size of a long long int:%d byte(s)\n",sizeof(d));
	printf("Size of a float:%d byte(s)\n",sizeof(e));
	return (0);
}

