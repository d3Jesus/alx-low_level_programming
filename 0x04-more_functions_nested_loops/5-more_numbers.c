#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 ten times followed
 * by a new line.
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int line, n, repeat, limit;

	n = '0';
	repeat = 0;
	limit = '9';

	for (line = 0; line < 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			repeat++;
			limit = '4';
			n = '0';
		}
		_putchar('\n');
		repeat = 0;
		n = '0';
		limit = '9';
	}
}
