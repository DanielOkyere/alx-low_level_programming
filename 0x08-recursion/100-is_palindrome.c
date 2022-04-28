#include "main.h"
int isPalRec(char *s, int num, int e);

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: int 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}

/**
 * isPalRec - helper function to is_palindrome
 * @s: string
 * @num: num
 * @e: end
 * Return: 1 if true, 0 if false
 */
int isPalRec(char *s, int num, int e)
{
	if (num == e)
		return (1);

	if (s[num] != s[e])
		return (0);

	if (num < e + 1)
		return (isPalRec(s, num + 1, e - 1));

	return (1);
}

/**
 * _strlen_recursion - return length of string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
		return (0);
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
