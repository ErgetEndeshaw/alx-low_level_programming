#include "main.h"
/**
 * main - Entry point
 * Write a function that checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
