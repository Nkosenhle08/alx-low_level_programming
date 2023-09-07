#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates mem function
 * @b: amount of bytes
 *
 * Return: pointer to the allocated mem
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
