#include "main.h"

/**
 * main - Entry point
 *
 * Description - Prints '_putchar', followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - function that prints the alphabet in lowercase
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'A'; letter < 'Z'; letter++)
		_putchar(tolower(letter));
	_putchar('\n');
}
