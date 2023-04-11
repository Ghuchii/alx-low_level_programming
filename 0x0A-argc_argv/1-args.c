#include <stdio.h>


/**
* main - start of programm ,prints the number of arguments passed into it.
* @argc: argument count
* @argv: arguments
*
* 11/04/2023
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;


printf("%d\n", argc - 1);
return (0);
}

