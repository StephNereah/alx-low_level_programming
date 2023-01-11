#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Description: prints 0 to 14 ten times, you can only use _putchar
 * 3 times
 * Return: void
 */

void more_numbers(void)
{
	int line, count;

	for (line = 0; line <= 10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			_putchar(count);
		}
	}
	_putchar('\n');
}
