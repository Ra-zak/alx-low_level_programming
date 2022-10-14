#include <stdio.h>

/**
 * main - entry point
 * *
 * Return:0 if success
 * *
*/
int main(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar ('\n');
	return (0);
}
