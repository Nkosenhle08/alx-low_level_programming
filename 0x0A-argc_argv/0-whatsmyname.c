#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: number of cmd line args
 * @argv: array that has the program cmd line args
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
