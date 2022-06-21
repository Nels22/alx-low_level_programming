#include "main.h"
/**
 * _memset - fills memory area with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
