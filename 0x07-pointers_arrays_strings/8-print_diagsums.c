#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals in an array.
 * @a: Array containing elements.
 * @size: Size of the array (number of rows or columns).
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int bdiagsum = 0;
	int fdiagsum = 0;
	int prev = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == 0)
		{
			bdiagsum += *(a + i);
			prev = i;
		}
		else if (i == (prev + size + 1))
		{
			bdiagsum += *(a + i);
			prev = i;
		}
	}

	for (i = 0; i < size; i++)
	{
		fdiagsum += *(a + (size * (i + 1) - (i + 1)));
	}

	printf("%d, %d\n", bdiagsum, fdiagsum);
}

