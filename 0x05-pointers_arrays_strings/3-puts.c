#include "main.h"
/**
  * _puts - Funcion prints a string, followed by a new line
  * to the standard output.
  * @str: The string to be printed out.
  */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[1]);
		i++;
	}
}
