#include <stdio.h>

/**
 * main - entry point.
 * *
 * Return:0 if code succeed
 * *
*/
int main(void)
{
	char alpha = 'a';

		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar("\n");
		return (0);
}
