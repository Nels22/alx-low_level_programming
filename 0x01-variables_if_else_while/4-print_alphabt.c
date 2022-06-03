#include <stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - prints all lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
 *
**/
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24 ; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
