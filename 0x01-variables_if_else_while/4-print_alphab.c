#include <stdio.h>
/**
 * main - rint the letters of the alphabet
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i !=133)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
