#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 * Write a function that prints the alphabet, in lowercase
 * Prototype: void print_alphabet(void)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
