#include "main.h"
/**
 * _strlen - entry for string length
 * @s: sring to be measured
 * Return: i if success
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i] != '\0'; ++i)
	{
		return (i);
	}
}
