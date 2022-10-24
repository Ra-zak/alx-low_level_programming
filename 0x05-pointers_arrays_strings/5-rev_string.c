#include "main.h"
/**
 * rev_string - entry point
 * @s: place holder for str
*/
void rev_string(char *s)
{
	int x = 0, y;
	char z = s[0];

	while (s[x] != '\0')
		x++;
	for (y = 0; y < x; y++)
	{
		x--;
		z = s[y];
		s[y] = s[x];
		s[x] = z;
	}
}
