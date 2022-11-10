#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array of integers
*/
int *array_range(int min, int max)
{
	int *s;
	int range, i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	s = malloc(range * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < range; min++, i++)
	{
		s[i] = min;
	}
	return (s);
}
