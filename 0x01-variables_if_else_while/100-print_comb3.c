#include <stdio.h>

/**
 * main - entry point
 * *
 * Return: 0 if success
 * *
*/
int main(void)
{
	int x;

	x = 0;
	for (x <= 9; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
