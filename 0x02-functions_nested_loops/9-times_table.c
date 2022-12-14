#include "main.h"

/**
 * times_table - funtion that prints the 9 times table, staring with 0.
 *
 * Return: Nothinh
 *
 */

void times_table(void)
{
	int column;
	int row;
	int result;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 10; row++)
		{
			result = column * row;

			if (result == 0)
				_putchar('0' + result);
			else if (result > 0 && result < 10)
				_putchar('0' + result);
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (row != 9)
				_putchar(',');

			if (result <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
