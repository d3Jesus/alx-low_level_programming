#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 ten times followed
 * by a new line.
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i;
	int times;

	while (times < 10)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + '0');

		times++;
	}

	_putchar('\n');
}
