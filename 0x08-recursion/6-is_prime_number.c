#include "main.h"

/**
 * funct_prime - Allows operation of _is_prime_number
 * @x: type int
 * @y: type int operator
 * Return: 0.
 */

int funct_prime(int x, int y)
{
	if ((y * y) == x || x < 0)
		return (0);
	else if ((y * y) > x)
		return (1);
	else
		return (funct_prime(x, (y + 1)));
}

/**
 * is_prime_number - function that returns the prime number.
 * @n: type int
 * Return: 0.
 */
int is_prime_number(int n)
{
	return (funct_prime(n, 0));
}
