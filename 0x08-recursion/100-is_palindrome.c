#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - looks if a string is a palindrome
 * @s: Parameter string to reverse
 * Return: 1 if it is a palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: finds the length of string
 * Return: length of the string
 * 03/08/2023
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the string characters recursively for a palindrome
 * @s: Parameter string to check
 * @i: iterator
 * @len: Parameter string lenght
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

