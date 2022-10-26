#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: pointer to the array
 * @n: number of element in the array to rev
*/
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
