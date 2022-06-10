#include "main.h"

/**
 * print_square - Prints square
 * @size: Takes size a Parameter
 *
 * Return: Nothing
 */
void print_square(int size)
{
	char square;
	in i, j;

	square = '#';

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(square);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
