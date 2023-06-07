#include "main.h"

/**
 * _sqrtcheck - checks if square root of the number exists
 *
 * @num: integer
 * @sqrt: integer
 *
 * return: int
 */

int _sqrtcheck(int num, int sqrt)
{
	if ((sqrt * sqrt)== num)
	{
		return (sqrt);
	}
	else if ((sqrt * sqrt)> num)
	{
		return (-1);
	}
	else
	{
		return (_sqrtcheck(num, sqrt + 1));
	}
}

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: number to find sqrt of.
  *
  *Return: squareroot of n.
  *-1 if n does not have a natural sqrt.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrtcheck(n, 0));
}
