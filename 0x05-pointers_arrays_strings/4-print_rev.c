#include "main.h"
/**
 * print_rev - Function prints a string in reverse.
 * followed by a new line.
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int i;
	char ch;

	for (i = 0; s[i] != 0; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		ch = s[i];
		_putchar(ch);
	}
	_putchar('\n');
}
