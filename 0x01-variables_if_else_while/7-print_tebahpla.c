#include<stdio.h>
/**
 * main -start of program 
 * 20/03/2023
 * Return: terminates the programm
 */
int main(void)
{
	char i;
	
	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
