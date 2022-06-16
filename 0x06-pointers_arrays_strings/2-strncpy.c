#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (0);
}
