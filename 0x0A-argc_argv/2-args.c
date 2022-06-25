#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 * main - prints all the arguments passed to it,
 * followed by a new line.
 * All the arguments including the first one are printed.
 * @argc: number of command line arguments.
 * @argv: array that containss the program command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
