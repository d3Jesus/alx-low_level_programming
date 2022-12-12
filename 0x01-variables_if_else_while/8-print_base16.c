#include<stdio.h>

/**
 * main - Entry point
 *
 * Description - Print all the numbers of base 16 in lowercase
 * followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar(*"\n");
	return (0);
}
