#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int swap
 * @b: second int swap
 *
 * Return void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
