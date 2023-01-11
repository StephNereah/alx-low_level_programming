#include "main.h"

/**
 * print_numbers -  prints the numbers from 0 to 9
 *
 * Description: prints the numbers from 0 to 9 followed by newline
 * you can only use _putchar twice in your code
 *
 * Return: void
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
