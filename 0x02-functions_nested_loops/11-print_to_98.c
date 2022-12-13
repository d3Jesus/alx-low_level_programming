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
	do
	{
		printf("%d, ", n);
		
		if (n < 98)
			n++;
		else
			n--;
	} while(n != 98);
}
