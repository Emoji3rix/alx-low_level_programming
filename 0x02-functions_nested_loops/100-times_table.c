#include "main.h"
/**
 * print_times_table - prints the times table with parameter
 * @n: parameter
 * Return: returns nothing.
 */
void print_times_table(int n)
{
	int digit, mult, prod;

	if (n <= 15 && n >= 0)
	{
		for (digit =0; digit <= n; digit++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = digit * mult;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

