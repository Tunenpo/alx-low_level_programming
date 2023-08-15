#include "main.h"
/**
* print_alphabet - Prints alphabets in lowercase
* Return: All good
*/
void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
