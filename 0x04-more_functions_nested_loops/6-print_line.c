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

    if (n > 0)
        for (int i = 0; i < n; i++)
        {
            _putchar('_');
        }
	_putchar('\n');
}