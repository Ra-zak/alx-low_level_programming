#include "main.h"
#include <stdio.h>
/**
 * main - entry
 * Return: o if true
*/
int main(void)
{
	int x, y;

	x = 0;
	if (x < 1024)
	{
		x++;
		if (x % 3 == 0 || x % 5 == 0)
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
