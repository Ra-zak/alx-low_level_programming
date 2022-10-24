#include "main.h"
/**
 * rev_string - entry point
 * @s: place holder for str
*/
void rev_string(char *s)
{
	int x, y, z;
	char *c, b;

	c = s;
	while (s[y] != '\0')
	{
		y++;
	}
	for (z = 1; z < y; z++)
	{
		c++;
	}
	for (x = 0; x < (y / 2); x++)
	{
		b = s[x];
		s[x] = *c;
		*c = b;
		x--;
	}
}
