#include <stdio.h>

/**
 * main - entry point
 *  *
 *  Return: 0 if success
*/
int main(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
