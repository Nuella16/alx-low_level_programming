#include "main.h"

/**
 * swap_int - swap the value of integers a with b
 *@a: integer one
 *@b: integer two
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
