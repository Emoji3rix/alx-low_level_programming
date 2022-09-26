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
 * Return: a pointer to the memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s, v = b;
	unsigned int i;


	for (i = 0; i < n; i++)
		p[i] = v;

	return (p);
}
