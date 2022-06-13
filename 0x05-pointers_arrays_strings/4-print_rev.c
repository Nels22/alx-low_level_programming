#include "main.h"
/**
 * print_rev - Function prints a string in reverse.
 * followed by a new line.
 * @s: The string to be reversed.
 */
void print_rev(char *str)
{
	int i;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
	_putchar(str[i]);
	i++;
	}
}
