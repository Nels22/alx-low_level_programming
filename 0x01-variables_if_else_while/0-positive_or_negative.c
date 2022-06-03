#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * This program will assign a random number to the variable n each time it is executed. 
 *The main function determines if a number is -ve, 0 or +ve
 *Return : Always 0 (output is success)
 */

/* Function main: This is the entry point for his program*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is Positive\n",n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n",n);
	}
	else
	{
		printf("%d is Negative\n",n);
	}	
	return (0);

}
