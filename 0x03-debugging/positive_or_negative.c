#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *
 * positive_or_negative : test
 *
 *   * to the variable n each time it is executed.
 *
 *    * The main function determines if a number is -ve, 0 or +ve
 *
 *     * Return: Always 0 (Success)
 *
 *      */

void positive_or_negative(int i)
{

		srand(time(0));

				i = rand() - RAND_MAX / 2;

				/*your code goes here*/

					if (i > 0)

							{

										printf("%d is positive\n", i);

											}

						else if (i < 0)

								{

											printf("%d is negative\n", i);

												}

							else

									{

												printf("%d is zero\n", i);

													}

								return (0);

}
