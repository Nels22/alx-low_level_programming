#include "main.h"

/**
  * _strlen - function returns the length of a string.
  * @s: the input string.
  * Return: length of a string.
  */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}



