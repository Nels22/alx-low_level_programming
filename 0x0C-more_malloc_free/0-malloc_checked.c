#include "main.h"
#include <stdblib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value = 98
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == null)
		exit(98);
	return (m);
}

