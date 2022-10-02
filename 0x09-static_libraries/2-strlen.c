#include "main.h"
#include <stdio.h>
/**
 * _strlen - To return the length of a string
 *
 * @s: char to return the length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s++)
		leng++;

	return (leng);
}
