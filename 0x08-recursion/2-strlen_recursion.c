#include "main.h"

/**
 * _strlen_recursion - Returns size of a string
 * @s: pointer to string
 *
 * Return: size of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
