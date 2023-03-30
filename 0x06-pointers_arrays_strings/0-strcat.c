#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: parameter input value
 * @src: parameter input value
 *
 * Return: void
 * 30/03/2023
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

