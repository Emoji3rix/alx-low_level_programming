#include <stdio.h>
/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled on
 *
 * Return: Always 0
 */

int main(void)
{
	printf("size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	return (0);
}
