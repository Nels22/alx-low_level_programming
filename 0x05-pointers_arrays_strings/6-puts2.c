#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * followed by a new line.
 * @str: The string to be evaluated
 */

void puts2(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			ch = str[i];
			_putchar(ch);
		}
	}
	_putchar('\n');
}
