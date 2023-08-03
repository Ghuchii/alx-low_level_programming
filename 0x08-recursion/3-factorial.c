#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: parameter used to return the factorial
 * Return: it factorial of n
 * 03/08/2023
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

