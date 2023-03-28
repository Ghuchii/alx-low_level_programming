#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: parameter value 1
 * @b: parameter value 2
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
