#include "main.h"
#include <ctype.h>

/**
 * print_alphabet - function that prints the alphabet in lowercase
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
		_putchar(tolower(letter));
	_putchar('\n');
}
