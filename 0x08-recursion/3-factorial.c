#include "main.h"

/**
 *factorial- returns factorial of a given  number
 *
 *@n: given number to return factorial of the number
 *
 *Return: factorial of a given number.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
