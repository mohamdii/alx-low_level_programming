#include <stdio.h>
#include <ctype.h>
/**
 * _islower - check char is lower
 *
 * Return: 0 when false and 1 when true
 */
int _islower(int c)
{

	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
