#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * followed by a new line
 * shows 1 if input is alphabet letter
 * and 0 is it is not
 *
 * @c: The character to check
 *
 * Return: 1 for alphabetic character, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
