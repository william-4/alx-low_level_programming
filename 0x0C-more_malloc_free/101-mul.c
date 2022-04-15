#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * mul - function that multiplies two positive integers
 * @num1: input integer
 * @num2: input integer
 *
 * Return: 0(Success)
 */
int mul(int num1, int num2)
{
        int *ptr;
        int ans;

        if (num1 && num2)
        {
                ptr = malloc(sizeof(int));
                ans = num1 * num2;
                *ptr = ans;
                printf("%d\n", *ptr);
                free(ptr);
        }
        else
        {
                printf("Error\n");
                exit(98);
        }
                return (0);
}

/**
 * main - calls mul function with 2 integers arguments
 *
 * @argc: count of input string arguments
 * @argv: string arguments with the first being the name of the program
 *
 * Return: 0(Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        /* atoi converts input string to int */
        mul(a, b);
        return (0);
}
