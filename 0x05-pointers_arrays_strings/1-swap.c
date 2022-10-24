#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first value to be swapped
 * @b: second value to be swaped
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
