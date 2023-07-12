
#include "main.h"
#include <stdlib.h>
/**
* create_array - create an array of size and assign chars,
* and initializes it with a specific char
*@size: Size of the array
*@c: Char to assign
*Return: NULL is 0 or when it fails,
*pointer to array when successful.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
