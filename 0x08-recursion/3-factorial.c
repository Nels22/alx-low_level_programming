#include "main.h"
/**
 * factorial - prints the factorial of a given number
 * @n: number whose factorial is to be printed.
 * Return: 0 is success and -1 if not.
 */
int factorial(int n)
{
	int fact;

	if (n == 1 || n == 0)
		return (1);

	if (n < 0)
		return (-1);

	if (n > 1)
		fact = n * factorial(n - 1);
	return (fact);
}

