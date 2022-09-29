#include "main.h"

/**
 * _puts-recursion - prints a string the then a new line
 * @s: pointer to the string
 * Retun: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
