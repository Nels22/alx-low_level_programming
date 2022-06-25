#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 * main - prints the number of arguments passed to it,
 * followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);
	return (0);
}
