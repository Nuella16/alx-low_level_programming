#include <stdio.h>
#include "main.h"

/**
 * main - Prints program name
 * @argc: Count arguments
 * @argv: array arguments
 * Return: 0 - success 
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
