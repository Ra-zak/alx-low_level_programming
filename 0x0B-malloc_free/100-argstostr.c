#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program.
 * @ac: number of arguments passed
 * @av: array containing string of ac
 * Return: pointer to concat arg
*/
char *argstostr(int ac, char **av)
{
	int i, j, len, clen;
	char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	i = j = len = clen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	p = (char *)malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, clen++)
			p[clen] = av[i][j];
		p[clen] = '\n';
		clen++;
	}
	p[clen] = '\0';
	return (p);
}
