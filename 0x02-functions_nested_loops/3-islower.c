#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * 
 * @c: the character to check
 *
 * Return: 1 if c is lowercase
 * Return: 0 if c is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
