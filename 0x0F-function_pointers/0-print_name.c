#include "function_pointers.h"
/**
 * print_name - prints a name passed to it
 * @name: input name to print
 * @f: function pointer pointing to char pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
