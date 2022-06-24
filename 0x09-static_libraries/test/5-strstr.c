#include "main.h"
/**
 * _strstr - function finds theb first occurence of the substring needle
 * @needle: substring to be found.
 * @haystack: string to be searched.
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
