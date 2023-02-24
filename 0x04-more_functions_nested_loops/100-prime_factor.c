#include <stdio.h>
/** main - finding prime factor
 *
 * Return: 0 always
 */

int main(void)
{
	long int n, maxfactor;
	int div;

	n = 612852475143;
	div = 2;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else 
		{
			maxfactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", maxfactor);
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
