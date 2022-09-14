#include "main.h"

/**
 * main - print x10 of the aplphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char y;

	while (c++<=9)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(c);
	}
	_putchar('\n');
}
