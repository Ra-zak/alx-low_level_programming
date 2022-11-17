#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters passed
 * @...: variable list of arguments
 * Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n != 0)
	{
		va_start(ap, n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
		va_end(ap);
		return (sum);
	}
	return (0);
}
