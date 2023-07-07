#include "main.h"
/**
* int is_prime_number - evaluate if the integer is prime or not
*@n: the integer to evaluate
*
*Return: 1 if the integer is prime and 0 if the integer is not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if the integer is prime recursively
 * @n: integer to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime and 0 if n is not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
