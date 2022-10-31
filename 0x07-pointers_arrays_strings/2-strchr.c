#include "main.h"
/**
 * _strchr - finds a char in a string
 * @s: string to check for char
 * @c: char being checked for
 * Return: a pointer
*/
char *_strchr(char *s, char c)
{
	int x;
	char *y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			y = &s[x];
			return (y);
		}
		else
		{
			return (NULL);
		}
	}
}
