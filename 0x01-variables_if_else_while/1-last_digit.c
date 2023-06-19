#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if (num < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
