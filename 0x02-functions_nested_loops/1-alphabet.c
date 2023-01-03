#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets followed by newline
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
