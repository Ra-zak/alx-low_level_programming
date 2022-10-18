#include "main.h"
/**
 * main - entry point
 * *
 * Return: 0 if success
 * *
*/
int main(void)
{
	char *var = "_putchar";

	while  (*var)
	{
		_putchar(*var);
		var++;
	}
	_putchar('\n');
	return (0);
}
