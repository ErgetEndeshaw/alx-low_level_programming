#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));
	{
		pass[i] = rand() % 90;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((3333 - sum) - '0' < 90)
		{
			n = 3333 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
