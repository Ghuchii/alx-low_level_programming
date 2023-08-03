#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String is going to be measured.
 *
 * Return: The length of the string.
 * 03/08/2023
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
