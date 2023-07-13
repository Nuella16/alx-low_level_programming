#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments.
 * @argc: count number of command line arguments.
 * @argv: array the command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
