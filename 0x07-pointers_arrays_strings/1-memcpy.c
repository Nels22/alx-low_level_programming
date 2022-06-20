#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest.
 * @src: source
 * @dest: destination
 * @n: bytes filled
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
