#include <stdio.h>

/**
 *main - prints number of arguments passed to it
 *@argc: count of arguments in argv
 *@argv: array of string arguments
 *
 *Return: 0(Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
