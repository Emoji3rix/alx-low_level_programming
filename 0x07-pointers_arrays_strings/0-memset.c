#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 *
 * @n: size of the memory
 *
 * @s: the pointer
 *
 * @b: the character to be placed
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char)b;
		return (s);
	}
}
