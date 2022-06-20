#include "main.h"
/**
 * _memset - fills the first n bytes of he memory area
 * pointed to by @s with the constant byte @c
 * @s: pointer to memory area to be filled.
 * @b: value to be set.
 * @n: number of bytes to be filled.
 *
 * Return: pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
