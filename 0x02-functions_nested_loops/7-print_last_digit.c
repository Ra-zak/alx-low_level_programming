#include "main.h"
/**
 *  print_last_digit - entry point
 *  @n: place holder
 *  Return: an int
*/
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x *= -1;
	}
	return (x);
}
