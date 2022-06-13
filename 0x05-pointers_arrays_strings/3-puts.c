#include "main.h"
/**
  * _puts - Funcion prints a string, followed by a new line
  * to the standard output.
  * @str: The string to be printed out.
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[1]);

	_putchar('\n');
}
