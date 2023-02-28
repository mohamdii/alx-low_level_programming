#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 */
int _atoi(char *s)
{
	int i, res;

	res = 0;
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
			res = -res;
		i++;
		if (s[i] == ',')
			break;
	}
	return (res);
}
