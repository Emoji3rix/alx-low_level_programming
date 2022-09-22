#include "main.h"

/**
 * rev_string - prints a reverse string
 *
 * @s: the string
 *
 */
void rev_string(char *s)
{
	char *start_a, *end_a, a;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	count = length;
	start_a = s;
	end_a = s;
	for (i = 0; i < count - 1; i++)
	{
		end_a++;
	}
	for (i = 0; i < count / 2; i++)
	{
		a = *end_a;
		*end_a = *start_a;
		*start_a = a;
		start_a++;
		end_a--;
	}
}

