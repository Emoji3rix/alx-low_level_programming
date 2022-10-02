#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @n: number of bytes to be copied
 * @src: source to be copied from
 * @dest: destination to copy to
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}

