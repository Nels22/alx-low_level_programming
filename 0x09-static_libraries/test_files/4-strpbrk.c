#include "main.h"
/**
 * _strpbrk - function loactes the first occurence in the string s
 * of any of the bytes in the string accept.
 * @s: string to be located.
 * @accept: string to be matched.
 * Return: pointer to the byte in s matching the byte in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
