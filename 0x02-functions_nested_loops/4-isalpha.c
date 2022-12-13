#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic  character
 *
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * Otherwise 0
 */

int _isalpha(int c)
{
	if (tolower(c) >= 'a' && tolower(c) <= 'z')
		return (1);
	else
		return (0);
}
