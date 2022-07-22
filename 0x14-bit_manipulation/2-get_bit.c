#include "main.h"

/**
 * get_bit - Function returns a calue of a bit at a given index.
 * @n: The bit
 * @index: Index to be accessed.
 *
 * Return: If an error occurs (-1)
 *         otherwise - the value of the but at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
