#include <stdio.h>

/**
 * main - Entry point.
 * Return: alway return 0 (success)
 */

int main(void)

{

	Printf("Size of a char: %zu byte(s)\n", sizeof(char));
	Printf("Size of an int: %zu byte(s)\n", sizeof(int));
	Printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	Printf("Size of a long long in: %zu byte(s)\n", sizeof(long long int));
	Printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return  (0);
}
