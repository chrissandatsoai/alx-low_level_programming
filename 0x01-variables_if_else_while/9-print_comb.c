#include <stdio.h>

/**
 * main - Print  all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}



