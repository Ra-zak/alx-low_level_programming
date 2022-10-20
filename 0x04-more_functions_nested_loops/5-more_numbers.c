#include "main.h"
/**
 * more_numbers - prints 10times from 0-14
*/
void more_numbers(void)
{
	int x = '0';
	int y;

	while (x <= 10)
	{
		y = '0';
		while (y <= 14)
		{
			_putchar(y);
			y++;
		}
		x++;
	}
	_putchar('\n');
}
