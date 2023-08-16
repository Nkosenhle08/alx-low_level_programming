#include <stdio.h>

/**
 * main - function to find 1st 50 fibonacci numbers
 * Return: 0
 */


int main(void)
{
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int next;
	int i;


	printf("%lu, ", t1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu, ", t2);
		next = t1 + t2;
		t1 = t2;
		t2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
