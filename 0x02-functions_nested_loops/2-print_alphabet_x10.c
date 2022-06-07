#include "main.h"
/**
 * print_alphabet_x10 - function prints lowercase letters
 * of the alphabet 10 times followed by new line
 * Return:0 success
 */
void print_alphabet_x10(void)
{
	/*Declaration of local variables*/
	int ch, i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
