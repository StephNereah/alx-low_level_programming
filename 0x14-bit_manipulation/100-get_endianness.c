#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int c = 1;

	if (*((char *)&c) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
