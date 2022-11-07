#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array
 * @size: size of array
 * @c: character
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	ar[0] = c;
	return (ar);
}
