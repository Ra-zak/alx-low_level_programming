#include "main.h"
#include <stdio.h>
/**
 * main - prints argc
 * @argc: number of arguments passed to program
 * @argv: array conting argc
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
