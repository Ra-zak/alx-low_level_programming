#include "main.h"
/**
 * print_square - entry point
 * @size: size of square
*/
void print_square(int size)
{
	int a = 0, b;

	if (size > 0)
	{
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
