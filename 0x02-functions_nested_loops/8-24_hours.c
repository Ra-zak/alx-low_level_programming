#include "main.h"
/**
 * jack_bauer - entry point
 * *
*/
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = x + 1; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');

			if (x == 23 && y == 59)
				continue;
			_putchar('\n');
		}
	}
}
