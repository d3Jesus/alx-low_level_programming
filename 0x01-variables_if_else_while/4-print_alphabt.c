#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description - Prints the alphabet in lowercase except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
		if (letter != 'E' && letter != 'Q')
			putchar(tolower(letter));

	putchar(*"\n");

	return (0);
}
