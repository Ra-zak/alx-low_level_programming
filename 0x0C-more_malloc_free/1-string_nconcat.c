#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings up to n bytes
 * @s1: source string
 * @s2: string to add up to n bytes
 * @n: number of bytes to by
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1c, s2c, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1c = 0; s1[s1c]; s1c++)
		;
	for (s2c = 0; s2[s2c]; s2c++)
		;
	if (s2c > n)
		s2c = n;
	else
		n = s2c;
	size = s1c + s2c + 1;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i < s1c)
		{
			p[i] = s1[i];
		}
		else 
		{
			p[i] = s2[i - s1c];
		}
	}
	p[size] = '\0';
	return (p);
}
