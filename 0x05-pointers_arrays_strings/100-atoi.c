#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - change string into integers
 * @s: check string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign, res;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - '0';
		}
		if (s[i] == ',')
			break;
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
		if (s[i] == ',')
			break;
	}
	res = res * sign;
	return (res);
}
