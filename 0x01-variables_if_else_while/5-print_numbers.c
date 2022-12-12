#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints all single digit numbers of base 10 starting from 0 followed
 * by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);

	putchar(*"\n");
	
	return (0);
}
