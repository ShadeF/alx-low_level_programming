#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet from a to z
 * @void: parameter
 *
 * Return: 0
 */
void print_alphabet(void);
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		printf("\n");
		x++;
	}
}
#endif /* MAIN_H */
