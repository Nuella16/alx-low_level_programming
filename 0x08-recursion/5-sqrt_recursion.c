#include "main.h"
/**
 * int _sqrt_recursion(int n) - finds square root of n
 * @n:  number
 * Return: The sqrt of n 
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion(int n)
 * @n: integer 
 * @i: integer
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
int i = 0;

if (i < 0) /*If n is negative*/
return (-1);

else
{
return (_evaluate(i, n)); /*Recursive call*/
}

}
