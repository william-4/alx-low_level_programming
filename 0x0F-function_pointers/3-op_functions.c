#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *op_add - adds int a and b
  *@a: integer
  *@b: integer
  *
  *Return: result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - subtracts b from a
  *@a:  integer
  *@b: integer
  *
  *Return: the result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplies a and b
  *@a: integer
  *@b: integer
  *
  *Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides a and b
  *@a: integer
  *@b: integer
  *
  *Return: the quotient after division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - the remainder after division of a and b
  *@a: integer
  *@b: integer
  *
  *Return: remainder after division
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
