#include "main.h"

/**
* Convert a binary number to an unsigned integer.
*
* @param b A null-terminated string containing the binary number.
* @return The unsigned integer equivalent of the binary number,
*                or 0 if b is NULL or not a valid binary string.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, base_two;

	if (!b)
	{
	return (0);
	}

	for (len = 0; b[len] != '\0'; len++)

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
	if (b[len] != '0' && b[len] != '1')
	{
		return (0);
	}

	if (b[len] & 1)
	{
	result += base_two;
	}
	}

	return (result);
}

