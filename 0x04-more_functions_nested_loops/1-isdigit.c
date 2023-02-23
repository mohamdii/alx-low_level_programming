#include "main.h"

/** _isdigit - function to check deget
 * @c: check input
 *
 * Return: 1 if c is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
