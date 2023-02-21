#include <stdio.h>

/**
 *int _islower(int c); - Returns 1 if char is lower
 */
int _islower(int c)
{

	if(islower(c))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
	return(0);
}
