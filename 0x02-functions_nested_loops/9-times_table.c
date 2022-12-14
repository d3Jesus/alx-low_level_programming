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

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');

			if (column != row)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
