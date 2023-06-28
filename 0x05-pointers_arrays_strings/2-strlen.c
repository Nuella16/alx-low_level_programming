#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s: string to be checked
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s[length++] != '\0')
	{
		length++;
	}

	return (length);
}
