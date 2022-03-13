#include <stdio.h>

int main (void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha +=1;
			continue;
		}

		putchar(alpha);
		alpha++;
	}
	return (0);
}
