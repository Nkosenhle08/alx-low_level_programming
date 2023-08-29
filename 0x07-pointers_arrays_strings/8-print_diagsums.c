#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of diagonals
 * @a: the pointer to an array
 * @size: the size of the matrix
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum8 = 0, k, l = 0;

	k = size - 1;
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum1 += a[l];
			if (j == k)
				sum8 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sum1, sum8);
}
