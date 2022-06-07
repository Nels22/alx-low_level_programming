#include "main.h"

/**
 * int_islower(int c) - function checks for 
 * lowercase character
 * followed by a new line
 * @c: The character is in ASCII code
 * Return: 1 for lowercase character, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
