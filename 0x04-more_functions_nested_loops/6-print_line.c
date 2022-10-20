#include "main.h"
/**
 * print_line -entry point
 * @n: place holder
*/
void print_line(int n)
{
	int x = 0;

	while (x <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
