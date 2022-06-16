#include "main.h"
/**
 * _strncat - function concatenates 2 strings
 * @src: source
 * @dest: destination
 * @n: amount of bytes used from src
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

