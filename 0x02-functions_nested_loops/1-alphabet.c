#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	int x;
	char c = 'a';

	for (x =  97; x <= 122; x++)
		_putchar(x);
	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
