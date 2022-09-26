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

	char *memDest = dest;
	char *memsrc = src;


		for (int i = 0; i < n; i++)
			memDest[i] = memsrc[i];

		return (dest);
}

