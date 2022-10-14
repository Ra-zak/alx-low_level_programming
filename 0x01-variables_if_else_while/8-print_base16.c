#include <stdio.h>

/**
 * main - entry point
 * *
 * Return: 0 if true
 * *
*/
int main(void)
{
	int x;
	char y;

	x = '0';
	y = 'a';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
