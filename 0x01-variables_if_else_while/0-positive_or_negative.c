#include <stdio.h>
/**
 * This code is for testing 0 value 
 * 
 * Returing a value
 */
int main(void)
{
	int n;
	scanf("enter a number",&n);
	if (n == 0){
		printf("%d is zero\n",n);
	} else if (n > 0) {
		printf("%d is positive\n",n);
	} else {
		printf("%d is negative\n",n);
	}
	return (0);
}
