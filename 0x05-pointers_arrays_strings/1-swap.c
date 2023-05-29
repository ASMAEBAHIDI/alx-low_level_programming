#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: First value
 * @b: Second value
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
