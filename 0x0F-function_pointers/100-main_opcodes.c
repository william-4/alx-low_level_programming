#include <stdlib.h>
#include <stdio.h>

/**
  *main - print opcodes of its own main function
  *@argc: number of arguments.
  *@argv: array of argument strings
  *
  *Return: 0.
  */
int main(int argc, char *argv[])
{
	int i;
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i  < a - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
