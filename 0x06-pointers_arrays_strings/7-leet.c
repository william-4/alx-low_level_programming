#include "main.h"

/**
 *leet - encodes a string into 1337.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int sCount, lCount;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	sCount = 0;
	while (s[sCount] != '\0')
	{
		lCount = 0;
		while (lCount < 10)
		{
			if (letters[lCount] == s[sCount])
			{
				s[sCount] = nums[lCount];
			}
			lCount++;
		}
		sCount++;
	}
	return (s);
}
