#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 * Return: pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i = 0, x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	s = malloc(x);
	if (s == NULL)
		return (NULL);
	while (i < x)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
