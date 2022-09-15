#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - returns a list of numbers, ending with 98
 * @n: start value of list of numbers to print
 * Return: void
 */
void print_to_98(int n)
{
	

	if (n <= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
