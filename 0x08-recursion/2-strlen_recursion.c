#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a srting
 * @s: input string to return
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
