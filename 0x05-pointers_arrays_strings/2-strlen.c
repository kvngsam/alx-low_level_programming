#include "main.h"
#include <string.h>

/**
 * _strlen - fuction that returns the length of a string.
 *
 * @n: length of a string
 *
 * Return: 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
