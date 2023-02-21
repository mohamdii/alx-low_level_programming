#include <stdio.h>
#include <ctype.h>
/**
 * _islower - check char is lower
 * @c: The number to be checked
 *
 * Return: 0 when false. 1 other wise
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
