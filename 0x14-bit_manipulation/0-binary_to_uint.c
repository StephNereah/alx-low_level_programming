#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: is a pointer to a string
 *
 * Return: converted number or 0 if one or more chars in the string b,
 * that is not 0 or 1
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int a = 0;

	while (b[a] != '\0')
	{
		if (b[a] == '0')
		{
			answer <<= 1;
		}
		else if (b[a] == '1')
		{
			answer = (answer << 1) | 1;
		}
		else
		{
			return (0);
		}

		a++;
	}

	if (b == NULL)
	{
               return (0);
	}
	
	return (answer);
}
