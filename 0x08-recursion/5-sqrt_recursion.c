#include "main.h"
/**
 * _sqrt_recursion - checks for the squareroot of a number
 * @n: number being checked
 * @x: number to check for against base which is n
 * Return: square root
*/
int help(int x, int base)
{
	if (x * x == base)
	{
		return (x);
	}
	if (x * x > base)
	{
		return (-1);
	}
	return (help(x + 1, base));
}
int _sqrt_recursion(int n)
{
	if ( n == 0)
	{
		return (0);
	}
	return (help(1, n));
}
