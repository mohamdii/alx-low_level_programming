/**
 * print_last_digit - function prints last digit
 * @x: check number
 *
 * Returns: the last digit
 */
int print_last_digit(int x)
{
	int z;

	z = x % 10;
	putchar (z + '0');
	return (z);
}
