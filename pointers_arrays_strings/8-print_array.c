#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i == 0)
	{
	printf("%d", a[i]);
	}
	else
	{
	printf(", %d", a[i]);
	}
	}
	printf("\n");
}


