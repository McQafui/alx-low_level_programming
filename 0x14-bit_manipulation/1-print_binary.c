#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int num, c = 0;
	unsigned long int current;

	for (num = 63; num >= 0; num--)
	{
		current = n >> num;

		if ((current & 1) == 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
			_putchar('0');
	}
	if (c == 0)
		_putchar('0');
}
