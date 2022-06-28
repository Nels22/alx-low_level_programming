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
	unsigned int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[1] != '\0'; i++)
		i++;

	strduplicate = (char *)malloc(sizeof(char) * (j + 1));

	if (strduplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strduplicate[i] = str[i];

	strduplicate[j] = '\0';

	return (strduplicate);
}
