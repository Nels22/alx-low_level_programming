#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
/*Declaration of variables*/
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);

}
