#include "main.h"
/**
  * swap_int - This function swaps the values of 2 integers
  * @a: First integer to be swapped
  * @b: Second integer to be swapped.
  */ 
void swap_int(int *a, int *b)
{
	int first, second;

	first = *a;
	second = *b;

	*a = second;
	*b = first;
}
