#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: decimal
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1 << index;

	if (index <= (sizeof(n) * 8) - 1)
	{
		*n &= ~m;

		return (1);
	}
	
	return (-1);
}
