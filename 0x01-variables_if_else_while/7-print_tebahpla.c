#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description - Prints the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'Z'; letter >= 'A'; letter--)
		putchar(tolower(letter));

	putchar(*"\n");

	return (0);
}
