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
	int y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x == 98 && z == 99)
				countinue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
