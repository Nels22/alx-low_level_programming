#include<stdio.h>

/**
 * main - prints alphabet in reversed order
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
