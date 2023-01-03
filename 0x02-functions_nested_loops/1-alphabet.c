#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * print_alphabet - prints the alphabet in lowercase
 * followed by a new line
 *Return: void
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();

	char c = 'a';

	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
