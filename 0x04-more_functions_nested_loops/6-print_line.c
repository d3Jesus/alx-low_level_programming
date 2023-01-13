#include "main.h"

/**
 * print_line - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

    if (line <= 0)
        _putchar('\n');

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}