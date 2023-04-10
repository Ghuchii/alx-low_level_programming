#include "main.h"
/**
 * _memset - this function fill a block of memory with a specific value
 * @s: starting address of the memory to be filled
 * @b: wanted value
 * @n: number of bytes to be changed
 *
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

