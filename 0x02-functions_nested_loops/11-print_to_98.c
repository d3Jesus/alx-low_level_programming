#include<stdio.h>

/**
 * print_to_98 - funtion that prints all natural numbers from n to 98
 *
 * @n: given number (starting point)
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n < 98)
		do
		{
			printf("%d, ", n);
			n++;
		} while (n <= 98);
	else
		do
		{
			printf("%d, ", n);
			n--;
		} while (n >= 98);
}
