#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - does multiplication of values in argv
 * @argc: number of argument
 * @argv: array of string in argc
 * Return: 0 if success error and 1 otherwise
*/
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
