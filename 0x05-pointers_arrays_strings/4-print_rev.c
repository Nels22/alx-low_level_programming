#include "main.h"
/**
 * print_rev - Function prints a string in reverse.
 * followed by a new line.
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int i;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	for (i--; i >= 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}
