#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * Return: 0 if c is uppercase
 */

int _islower(int c)
{
	int result;
       	if (islower(c + '0'))
		result = 1;
	else
		result = 0;

	return (result);
}
