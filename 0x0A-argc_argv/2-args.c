#include <stdio.h>

/**
 *main - prints all arguments it receives
 *@argc: count of arguments in argv
 *@argv: input array of string arguments
 *
 *Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
