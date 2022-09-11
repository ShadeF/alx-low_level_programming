#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha == 97 && alpha <123)
	{
		while (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
