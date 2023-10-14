#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip,
 *	to get from one number to another
 * @n: is an int
 * @m: is an int
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip = n ^ m;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}

	return (count);
}
