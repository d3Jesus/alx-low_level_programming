#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for(letter = 'A'; letter <= 'Z'; letter++)
		putchar(tolower(letter));

	putchar(*"\n");

	return (0);
}
