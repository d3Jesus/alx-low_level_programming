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
		if (b > c || a > c)
			largest = a;
		else
			largest = c;
	}
	else if (b > c)
	{
		if (c > a || b > a)
			largest = b;
		else
			largest = a;
	}
	else if (c > a)
	{
		if (a > b || c > b)
			largest = c;
		else
			largest = b;
	}
	else if (a == b && b == c)
		largest = a;

	return (largest);
}
