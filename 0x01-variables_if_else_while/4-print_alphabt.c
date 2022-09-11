#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
