#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
 * main - prints its name followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);
	return (0);
}
