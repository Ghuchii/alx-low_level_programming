#include<stdio.h>
/**
 * main - start of program
 * Return: always zero
 * 20/03/2023
 */
int main(void)
{
	char i;
	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
