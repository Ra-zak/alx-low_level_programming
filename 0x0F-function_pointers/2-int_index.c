#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: -1 if no match and index number if thetres match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
