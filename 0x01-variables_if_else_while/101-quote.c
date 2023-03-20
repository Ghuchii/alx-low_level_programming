#include <unistd.h>
#include <string.h>
/**
 * main - main function
 *
 * Return: return 1
 */
int main(void)
{
	char my_string[] = "and that piece of art is useful \" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, my_string, strlen(my_string));
	return (1);
}
