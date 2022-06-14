#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: Takes s as parameter
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
