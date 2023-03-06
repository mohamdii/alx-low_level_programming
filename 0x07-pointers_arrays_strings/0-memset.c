#include "main.h"

/**
 * _memset - function fills the memory with a constant byte
 * @s: string
 * @b: the charactar
 * @n: number of times
 *
 * Return: charactar string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
}
