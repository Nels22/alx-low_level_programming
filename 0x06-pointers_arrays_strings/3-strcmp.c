#include "main.h"
/**
 * _strcmp - function compares2 strings.
 * @s1: first string
 * @s2: second string.
 * Return: value of comparison.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != '\0' || *s2 != '\0')
			break;
		s1++;
		s2++;
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		else
			return (-1);
	}
}
