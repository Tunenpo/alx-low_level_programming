#include "main.h"

/**
 * set_string - Updates the value of a pointer to point to a new string.
 * @s: Pointer to a pointer to a string.
 * @to: Pointer to the new string.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

