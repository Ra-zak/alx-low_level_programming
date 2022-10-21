#include "main.h"
/**
 *  print_diagonal -entry
 *  @n: place holder
*/
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		x = 0;
		while (x < n)
		{
			y = 0;
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
