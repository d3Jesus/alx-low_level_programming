#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -1 * last_digit;

	_putchar(last_digit + '0');

	return (0);
}
