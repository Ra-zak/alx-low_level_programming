#include "main.h"
/**
 * rot13 - encodes
 * @s: holder
 * Return: char
*/
char *rot13(char *s)
{
	int x;

	x = 0;
	while (s[x])
	{
		while ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] >= 'a' && s[x] <= 'm') || (s[x] >= 'A' && s[x] <= 'M'))
			{
				s[x] += 13;
			}
			else
			{
				s[x] -= 13;
			}
		}
		x++;
	}
	return (s);
}
