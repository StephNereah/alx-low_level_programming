#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @index: is the index
 * @n: is an int
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(n) * 8) - 1)
	{
		return ((n >> index) & 1);
	}

	return (-1);
}
