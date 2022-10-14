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
	while (x < 100)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
