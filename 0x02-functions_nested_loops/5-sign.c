#include "main.h"
/**
 * main - Entry point
 * Write a function that prints the sign of a number
 * Rerurn: 1 if n is greater than zero or -1  if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

