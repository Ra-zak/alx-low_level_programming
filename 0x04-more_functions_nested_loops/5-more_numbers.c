#include "main.h"
/**
 * more_numbers - prints 10times from 0-14
*/
void more_numbers(void)
{
	char x = 0;
	char y;

	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
			y++;
		}
		x++;
		_putchar('\n');
	}
}

