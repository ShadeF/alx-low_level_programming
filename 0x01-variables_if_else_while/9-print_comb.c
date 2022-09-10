#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;	
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
