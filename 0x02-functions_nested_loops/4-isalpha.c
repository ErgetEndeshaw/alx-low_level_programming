#include "main.h"
/**
 * main - Entry point
 * Write a function that checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
