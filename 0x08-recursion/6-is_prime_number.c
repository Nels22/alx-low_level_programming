#include "main.h"
/**
 * is_prime - function checks if a number is prime
 * @n: number to be checked.
 * @c: value to perform check.
 * Return: 1 if the integer is prime,
 * 0 if integer is not a prime number.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - function checks if a number is prime
 * @n: number to be checked.
 * Return: 1 if the integer is prime,
 * 0 if integer is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
