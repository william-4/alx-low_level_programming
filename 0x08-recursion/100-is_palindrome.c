#include "main.h"

/**
 *str_len - returns the lenght of a string.
 *@str: input string
 *
 *Return: int (length of the input string)
 */
int str_len(char *str)
{
	if (*str)
	{
		return (1 + str_len(str + 1));
	}
	return (0);
}

/**
  *helperFun - checks if two strings are palindrome
  *@s: pointer to string.
  *@first: first index.
  *@last: last index.
  *
  *Return: 1 if palindrome and 0 if not
  */
int helperFun(char *s, int first, int last)
{
	if (first < last && s[first] == s[last])
	{
		return (helperFun(s, first + 1, last - 1));
	}
	if (s[first] != s[last])
	{
		return (0);
	}
	return (1);
}

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: input string
 *
 *Return: 1 if palindrom and 0 if not
 */
int is_palindrome(char *s)
{
	int a;
	int b;

	a = 0;
	b = str_len(s) - 1;

	if (!*s)
		return (1);
	return (helperFun(s, a, b));
}
