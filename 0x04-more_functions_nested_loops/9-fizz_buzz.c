#include <stdio.h>

/**
 * main - implementation of the fizzbuzz logrithm
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%d", i);
		else
		{
			if ((i % 3 == 0) && (i % 5 != 0))
				printf("Fizz");
			else if ((i % 3 != 0) && (i % 5 == 0))
				printf("Buzz");
			else
				printf("FizzBuzz");
		}
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
