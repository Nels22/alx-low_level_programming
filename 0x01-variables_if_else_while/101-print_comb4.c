#include <stdio.h>
/**
 * main- this program prints all possible
 * different combinations of 3 digits.
 * the 3 digits must be different
 * Digits are separated by comma followed by space
 * print only the smallest combination of 3 digits
 * numbers printed in ascending order
 * Return: 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');
				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
