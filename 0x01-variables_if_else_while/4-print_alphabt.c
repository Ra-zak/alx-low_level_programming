#include <stdio.h>

/**
 * main - entry point
 * *
 * Return: 0 if success
 * *
*/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n')
		return (0);
}
