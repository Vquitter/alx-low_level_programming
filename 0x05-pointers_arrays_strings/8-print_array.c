#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n of elements an array of integers
 * @a: array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int *b)
{
	int j;

	for (j = 0; j < b; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
