#include "main.h"
/**
 * islower - checks if a character is lower
 *
 * Return: return 1 if lower other return 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
