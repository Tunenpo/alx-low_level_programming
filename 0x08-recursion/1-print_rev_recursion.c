#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function prints a given string in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}


