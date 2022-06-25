#include <stdio.h>
#include <stdlib.h>
/**
 * main - program multiplies 2 numbers
 * followed by a new line.
 * All the arguments including the first one are printed.
 * @argc: number of command line arguments.
 * @argv: array that containss the program command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
