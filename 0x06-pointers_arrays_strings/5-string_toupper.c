#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: strig to be changed
 * Return: A poiter to the changed string
 *
 */
char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= '2')
			str[index] -= 32;
		index++;
	}
	return (str);
}
