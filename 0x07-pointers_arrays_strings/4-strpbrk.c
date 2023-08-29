#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first occurrence of a character from a set.
 *
 * @s: A pointer to the string to search.
 * @accept: A pointer to the string containing characters to search for.
 *
 * Return: first matching character in s, or NULL if none found.
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		char *current_accept = accept;

		while (*current_accept != '\0')
		{
			if (*s == *current_accept)
			{
				return (s);
			}
			current_accept++;
		}
		s++;
	}
	return (NULL);
}

