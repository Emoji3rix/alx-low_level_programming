#include <stdio.h>
/**
 * main - print the letters of the alphabet
 * Return: 0
 */

int main(void)
{
	int b;
	int j;

	b = 97;
	j = 65;

	while (b < 123)
	{
		putchar(b);
		b++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
