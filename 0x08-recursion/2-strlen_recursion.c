#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string whose length is to be checked
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}