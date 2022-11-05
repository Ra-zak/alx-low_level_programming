#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * help - checks for valid input
 * @argc: counter
 * @argv: vector
 * @i: counter for argc
 * @x: counter for argv
 * Return: int
*/
int help(int argc, int i, unsigned int x, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (x = 0; argv[i] != '\0'&& x < strlen(argv[i]); x++)
			if (isdigit(argv[i][x]) == 0)
				return (1);
	return (0);
}
/**
 * main - entry
 * @argc: counter
 * @argv: vector
 * Return: int
*/
int main(int argc, char *argv[])
{
	unsigned int cent;
	int coin;

	cent = coin = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
		{
			printf("0\n");
		}
		if (help(argc, 1, 0, argv) == 0)
		{
			cent = atoi(argv[1]);
			for ( ; cent >= 25; coin++, cent -= 25)
				;
			for ( ; cent >= 10; coin++, cent -= 10)
				;
			for ( ; cent >= 5; coin++, cent -= 5)
				;
			for ( ; cent >= 2; coin++, cent -= 2)
				;
			for ( ; cent >= 1; coin++, cent -= 1)
				;
			printf("%d\n", coin);
		}
		else
			printf("Error\n");
		return (0);
	}
}
