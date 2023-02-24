#include <stdio.h>
/** main - finding prime factor
 *
 * Return: 0 always
 */

int main(void)
{
	long int n;

	n = 612852475143;

	long int div = 2, ans = 0, max;

	while (n != 0)
	{
		if (n % div !=0)
			div = div + 1;
		else
		{
			max = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", max);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
