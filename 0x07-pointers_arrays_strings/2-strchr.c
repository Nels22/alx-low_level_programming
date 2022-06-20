#include "main.h"
#include <stdio.h>
/**
 * _strchr - function locates a character in a string.
 * @c: character to be located.
 * @s: string upon which character is located.
 * Return: pointer to the first occurence of the character,c
 * or NULL if character is not found
 */
char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == 0)
		return (s + i);
	return (0);
}