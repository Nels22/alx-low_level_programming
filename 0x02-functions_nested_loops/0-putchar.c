#include <unistd.h>

/**
 * _putchar - prints _putchar followed by a line
 * Return:0 (Success)
 *
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
