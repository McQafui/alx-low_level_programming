#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1;

	mask <<= (size - 1);

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
		size--;
	}

	if (size == 0)
		_putchar('0');
}

