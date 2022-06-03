#include <stdio.h>
/**
 * main - program prints all combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);



}

