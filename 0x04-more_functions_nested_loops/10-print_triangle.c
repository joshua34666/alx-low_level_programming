#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: takes in an integer for size of triangle.
 */
void print_triangle(int size)
{
	int i, s, c;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 1; s < (size - i); s++)
				_putchar(' ');
			for (c = s; c <= size; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
