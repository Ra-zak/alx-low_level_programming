#include "main.h"
/**
 * _strchr - finds a char in a string
 * @s: string to check for char
 * @c: char being checked for
 * Return: a pointer
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
}
