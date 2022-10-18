#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
*/
void print_alphabet_x10(void)
{
	int x = 0;
	char y = 'a';

	while (x < 10)
	{
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		x++;
	}
	_putchar('\n');
}
