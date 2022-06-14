#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string, to stdout
 * @str: value to be evaluate
 *
 * Return: not.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
