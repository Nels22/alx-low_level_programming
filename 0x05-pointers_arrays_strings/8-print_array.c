#include "main.h"
#include <stdio.h>

/**
* print_array - This function prints n element
* of an array of integers
* @a: Array of integers to print.
* @n: number of array integers to print
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
