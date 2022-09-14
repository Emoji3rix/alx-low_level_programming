#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 * Return: Always return 0
*/
void print_alphabet_x10(void)
{
	int c;
	int y;

	for (c = 0; c < 10; c++)
	{
		for (y = 0; y < 26; y++)
			_putchar('a' + y);
		_putchar('\n');
	}
}
