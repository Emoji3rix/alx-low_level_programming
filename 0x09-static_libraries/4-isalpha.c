#include "main.h"
/**
 * _isalpha - checks if its an alphabet
 * @c: The character to be checked.
 * Return: return 1 if is an alphabet or 0 if otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
