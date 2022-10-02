#include "main.h"

/**
 * _isupper - a functiom that checks for uppercase.
 * @c: int value to be tested.
 * Return: 1 if c is upper case
 * 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
