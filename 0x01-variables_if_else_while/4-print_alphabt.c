#include <stdio.h>
/**
 * main - rint the letters of the alphabet
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}

	putchar('\n');

	return (0);
}
