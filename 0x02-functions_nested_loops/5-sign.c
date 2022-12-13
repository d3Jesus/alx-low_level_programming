#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: the number to verify
 *
 * Return: 
 * 1 if n is greater than zero
 * 0 if n is zero
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
