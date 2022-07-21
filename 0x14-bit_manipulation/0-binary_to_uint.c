#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to unsigned integer.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number Or
 *          0 - if b is null
 *          or there is no more chars in the string that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len, base_two;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			num += base_two;
	}

	return (num);
}
