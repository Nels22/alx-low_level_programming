#include <unistd.h>
#include "main.h"

/**
 * print_sign - checks the sign of an int passed to it
 *and prints the sign (+ or -)
 *
 * @n: The integer to check
 *
 * Return: 1 if n is greater than 0, and prints +
 * returns 0 if n is zero, and prints 0
 * returns -1 if n is less than 0 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
