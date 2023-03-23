#include <stdio.h>

/**
 * main - Print  all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 *
 */

ont main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 58)
		{
			putchar('.');
			putcar('.');
		}
	}
	putchar('\n');
	return (0);
}



