#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Determines if number is greater than 5, less than 6 or is 0
 *
 * Return: Always 0 (Success)
 * */

int main(void)
{
/*Declaration of variable*/
	int n, l;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l= n % 10;
	if  (l > 5)
	{
		printf("The last digit of %d is %d and it is greater than 5\n", n, l);
	}
	else if (l==0)
	{
		printf("The last digit of %d is %d and is equa; to  0\n", n, l);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6\n", n, l);
	}
	return (0);

}