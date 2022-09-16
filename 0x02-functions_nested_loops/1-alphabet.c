#include "main.h"

/**
 * main - prints alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	return (0);
}
