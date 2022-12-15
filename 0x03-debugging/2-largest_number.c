#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (c > a)
			largest = c;
	}
	else if (b > c)
	{
		if (c > a)
			largest = b;
		else if (a > b)
			largest = a;
	}
	else if (c > a)
	{
		if (a > b)
			largest = c;
		else if (b > c)
			largest = b;
	}
	else if (a == b && b == c)
		largest = a;

	return (largest);
}
