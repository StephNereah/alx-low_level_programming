#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;
	int j = 10;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 16)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
