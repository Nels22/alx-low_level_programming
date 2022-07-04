#include <stdio.h>
/**
 * main - program prints the name of the file it was compiled from.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Name of Source File: %s\n", _FILE_);
	return (0);
}
