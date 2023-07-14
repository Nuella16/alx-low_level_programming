#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	if (min > max)
		return (NULL);

	range = max -  min + 1;

	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
