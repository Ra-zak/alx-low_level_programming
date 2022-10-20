#include "main.h"
/**
 * more_numbers - prints 10times from 0-14
*/
void more_numbers(void)
{
	char x = '0';
	char y = '0'

	while (x < 10)
	{
		if (y >= '0' && y <= 13)
		{
			-putchar(y);
			y++;
		}
		x++;
		_putchar('\n');
	}
}

