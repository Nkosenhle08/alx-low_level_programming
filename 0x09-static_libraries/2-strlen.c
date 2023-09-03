#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 *
 * Return:length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}


