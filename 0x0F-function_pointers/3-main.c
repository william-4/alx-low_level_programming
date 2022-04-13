#include <stdlib.h>
#include <stdio.h>
#include "3-main.h"

/**
  *main - start of execution
  *@argc: argument count
  *@argv: array of string arguments
  *
  *Return: result if successful and error if not
  */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int i = 0;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = (get_op_func(argv[2]))(a, b);
	printf("%d\n", i);
	return (0);
}
