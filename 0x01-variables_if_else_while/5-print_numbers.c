#include <stdio.h>
/**
 * main - Entry point
 * Write a program that prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	for (a = 0; a < 10; a++)
		printf("%", a);
	putchar('\n');
	return (0);
}
