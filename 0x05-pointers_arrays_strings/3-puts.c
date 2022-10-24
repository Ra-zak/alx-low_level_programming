#include "main.h"
/**
 * _puts - entry point
 * @str: string to be printed
*/
void _puts(char *str)
{
	char p = *str;

	while (p != '\0')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');
}
