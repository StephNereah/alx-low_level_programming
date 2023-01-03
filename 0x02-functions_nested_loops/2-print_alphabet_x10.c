#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char c = 'a';

	while (times < 10)
	{
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');

		times++;
	}
}
