#include <stdio.h>

/**
 * main -entry point
 * *
 * Return: 0 if success
 * *
*/
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 10; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
					continue;
				if (x == 7 && y == 8 && z == 9)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
