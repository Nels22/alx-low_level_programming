#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Prints alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
/*Declaration of variables*/
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(alph[i]);
		putchar(ALPH[i]);
	}
	putchar('\n');
	return (0);

}
