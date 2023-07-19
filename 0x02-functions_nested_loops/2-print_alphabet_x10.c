#include "main.h"
/**
 * main - Entry point
 * Write a function that prints 10 times the alphabet, in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = a; i <= z; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
