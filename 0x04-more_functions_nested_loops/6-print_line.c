#include "main.h"
/**
 * print_line -entry point
 * @n: place holder
*/
void print_line(int n)
{
	int x;

		if (n > 0)
		{
			x = 0;
			while (x <= n)
			{
				_putchar('_');
				x++;
			}
		}
		_putchar('\n');
}
