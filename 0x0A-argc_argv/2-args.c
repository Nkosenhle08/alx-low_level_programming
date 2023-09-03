#include <stdio.h>

/**
 * main - prints all args received
 * @argc: number of cmd line args
 * @argv: array that has the program cmd line args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
