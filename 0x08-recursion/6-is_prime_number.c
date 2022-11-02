#include "main.h"
/**
 * is_prime_number - checks for a prime number
 * @n: number to check
 * Return: int
*/
int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
	return (0);
}
