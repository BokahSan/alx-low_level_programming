#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of n.
 * @n: type int
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
