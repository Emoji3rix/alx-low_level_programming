#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
