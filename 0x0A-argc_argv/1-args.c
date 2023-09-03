#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: number of cmd line args
 * @argv: array tghat has the program cmd line args
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
