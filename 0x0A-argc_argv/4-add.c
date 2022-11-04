#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * help - for positive numbers
 * @argc: counter
 * @argv: vector
 * @i: argc counter
 * @y: argv counter
 * Return: 0 if successi
*/
int help(int argc, int i, unsigned int y, char *argv[])
{
	for (i = 1; i <= argc; i++)
	{
		for (y = 0; *argv[i] != '\0' && y < strlen(*argv[i]); y++)
		{
			if (isdigit(*argv[i][y]) == 0)
			{
				return (1);
			}
		}
	}
	return (0);
}
/**
 * main - add positive number
 * @argc: counter of arg
 * @argv: array of str
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (help(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
