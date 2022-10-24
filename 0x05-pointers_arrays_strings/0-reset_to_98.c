#include "main.h"
/**
 * reset_to_98 - reset a num to 98
 * @n: place holder
*/
void reset_to_98(int *n)
{
	int *x;

	*x = &n;
	*x = 98;
}
