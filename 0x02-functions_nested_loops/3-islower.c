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
	return (islower(c + '0'));
}
