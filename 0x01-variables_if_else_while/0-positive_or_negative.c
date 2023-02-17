#include <stdio.h>
/**
 * This code is for testing 0 value 
 * 
 * Returing a value
 */
int main(void)
{
	char n;
	
	if (n == 0){
		printf("%d:is zero",n);
	} else if (n > 0) {
		printf("%d:is positive",n);
	} else {
		printf("%d:is negative",n);
	}
	return (0);
}
