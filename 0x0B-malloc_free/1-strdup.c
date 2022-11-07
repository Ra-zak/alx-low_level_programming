#include "main.h"
#include <stdlib>
/**
 * _strdup - copies a string
 * @str: pointer of string to copy
 * Return: pointer
*/
char *_strdup(char *str)
{
	char *s;
	unsigned int i, x;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	if (i < 1)
		return (NULL);
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		s[x] = str[x];
	}
	s[x] = '\0';
	return (s);
}
