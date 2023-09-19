#include "main.h"


/**
 *swap_int - swaps two integers
 *
 * @a: first int pointer
 * @b: second int pointer
 *
 * description: swaps values using pointers
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
