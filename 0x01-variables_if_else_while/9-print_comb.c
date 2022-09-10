#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
