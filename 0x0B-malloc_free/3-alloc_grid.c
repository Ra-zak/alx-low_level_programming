#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prints a 2d array
 * @width: width of array
 * @height:height of the array
 * Return: pointer to 2d array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	i = j = 0;
	if (height < 1)
		return (NULL);
	p = (int**)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(P);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
