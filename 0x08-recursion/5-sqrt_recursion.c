#include "main.h"
/**
 * help - checks for the squareroot of a number
 * @base: number being checked
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
/**
 * _sqrt_recursion - checks for the square root of a number
 * @n:number to square root
 * Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (help(1, n));
}
