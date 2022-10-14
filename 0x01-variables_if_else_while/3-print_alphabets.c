#include <stdio.h>

/**
 * main - entry point.
 * *
 * Return: 0 if success
 * *
*/
int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
