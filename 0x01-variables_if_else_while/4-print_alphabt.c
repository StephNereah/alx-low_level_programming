#include <stdio.h>

/**
 * main - prints all lowercase letters except q and e
 *
 * Description: prints all lowercase letters expect q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
