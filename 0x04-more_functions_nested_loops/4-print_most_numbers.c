#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2, 4
 *
 * Description: prints numbers from 0 to 9 except 2, 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c = '0';

	if (c != '2' && c != '4')
	{
		while (c <= '9')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
