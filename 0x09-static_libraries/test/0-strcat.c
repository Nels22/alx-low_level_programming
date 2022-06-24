#include "main.h"
/**
 * _strcat - function concatenates 2 strings.
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string, dest.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	for (count = 0; dest[count] != '\0'; count++)
		;
	for (count2 = 0; src[count2] != '\0'; count2++, count++)
	{
		dest[count] = src[count2];

	}
	dest[count] = '\0';
	return (dest);
}

