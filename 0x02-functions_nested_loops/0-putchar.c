#include <unistd.h>

/**
 * _putchar - prints _putchar followed by a line
 * Return:0 (Success)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
