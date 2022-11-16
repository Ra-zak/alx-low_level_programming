#include "function_pointers.h"
/**
 * array_iterator - does an action to all the elements of an array
 * @array: array to iterate
 * @size: size of array to iterate
 * @action: function to carry out on array elements
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
