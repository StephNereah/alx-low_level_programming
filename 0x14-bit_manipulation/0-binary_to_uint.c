#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: is a pointer to a string
 *
 * Return: converted number or else 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0')
		{
			answer <<= 1;
		}
		else if (*b == '1')
		{
			answer = (answer << 1) | 1;
		}
		else
		{
			return (0);
		}

		b++;
	}

	return (answer);
}
