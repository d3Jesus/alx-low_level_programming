#include "main.h"
#include <ctype.h>

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n : value
 *
 * Return: absolute values of n
 */

int _abs(int n)
{
	int absolute;

	if (n >= 0)
		absolute = n;
	else
		absolute = -1 * n;
	return (absolute);
}
