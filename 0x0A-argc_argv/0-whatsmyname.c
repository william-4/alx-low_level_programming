#include <stdio.h>

/**
 *main - prints it's own name
 *@argc: count of arguments in argv[]
 *@argv: array of strings
 *
 *Return: 0(Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
