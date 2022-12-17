#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9 followed
 * by a new line. Do not print 2 and 4
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 and i != 4)
			_putchar(i + '0');

	_putchar('\n');
}
