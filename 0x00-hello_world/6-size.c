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
	printf("size of a char: %i byte(s)\n",sizeof(char));
	printf("size of an int: %i byte(s)\n",sizeof(int));
	printf("size of a long int: %i byte(s)\n",sizeof(long int));
	printf("size of a long long int: %i byte(s)\n",sizeof(long long int));
	return (0);
}
