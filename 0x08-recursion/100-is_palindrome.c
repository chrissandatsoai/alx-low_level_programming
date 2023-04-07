#include "main.h"

int check_pal(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 * is_palindrome - check if sting is palindrome.
 * @s: string to reverse
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - returns the length of string
 * @s: calculates the string length of
 * Return: length of string
 */
int strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + strlen_recursion(s + 1));
}

/**
 * check_pal - check the characters recursivley for palindrome
 * @s: sting check
 * @i: iterator
 * @len: length of string
 * Return: 1 if it is, 0 if not
 */
int check_pal(char *s, int i, int len)
{

if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));

}
