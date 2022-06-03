#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Prints alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
/*Declaration of variables*/
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52 ; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);

}
