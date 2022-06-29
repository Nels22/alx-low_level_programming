#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string,
 * which is a duplicate to the string.
 * @str: the string to be duplicated.
 * Return: pointer to the duplicated string
 *         NULL id str = NULL
 *         NULL if insufficient memory available.
 */
char *_strdup(char *str)
{
	char *strduplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	strduplicate = malloc(sizeof(char) * (len + 1));

	if (strduplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		strduplicate[index] = str[index];

	strduplicate[len] = '\0';

	return (strduplicate);
}
