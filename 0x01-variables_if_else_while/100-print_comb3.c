#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Description - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		j = 48;

		while (j < 58)
		{
			putchar(i);
			putchar(j);


			if (i < 58 || j < 58)
			{
				putchar(44);
				putchar(32);
			}

			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
