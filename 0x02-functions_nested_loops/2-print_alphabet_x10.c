#include "main.h"
#include <ctype.h>

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char letter;
	int times;

	for (times = 1; times <= 10; times++)
		for (letter = 'A'; letter <= 'Z'; letter++)
			_putchar(tolower(letter));
	_putchar('\n');
}
