#include "main.h"
/**
 * _strlen - returns the string length
 * @s: string length
 * Return: length of string printed
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
