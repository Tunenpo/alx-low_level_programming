#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times
 * Return: All good
 */
void print_alphabet_x10(void)
{
	int b = 0;
	char z;

	while (b < 10)
	{
		z = 'a';
		while (z <= 'z')
		{
			_putchar(z);
			z++;
		}
		_putchar('\n');
		b++;
	}
}
