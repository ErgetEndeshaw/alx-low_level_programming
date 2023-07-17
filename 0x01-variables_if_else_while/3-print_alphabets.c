#include <stdio.h>
/**
 * main - Entry point
 * write a program that prints the alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char C;
	char d;

	C = 'a';
	d = 'A';
	while
		(C <= 'z') {
			putchar(C);
			C++;
		}
	while
		(d <= 'Z') {
			putchar (d);
			d++;
		}
	putchar('\n');
	return (0);
}
		
