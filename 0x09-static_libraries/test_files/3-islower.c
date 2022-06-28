#include "main.h"

/**
 * _islower - checks for lowercase character
 * followed by a new line
 * shows 1 if input is lowercase letter
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for lowercase character, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
