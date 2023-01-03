#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int times = 0;

	while (times < 10)
	{
		char c = 'a';

		while (c < 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');

		times++;
	}
}
