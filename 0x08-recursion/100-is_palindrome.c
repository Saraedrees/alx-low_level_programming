#include "main.h"
int check_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * check_palindrome - check if a string is a palindrome.
 * @s: string to be checked.
 * @start: index of the string to be checked.
 * @end: index of the string to be checked.
 *
 * Return: 1 if s in string, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] == s[end])
		return (check_palindrome(s, start + 1, end - 1));
	else
		return (0);
}


/**
 * is_palindrome - check if a string is a palindrome.
 * @s: string to be checked.
 *
 * Return: 1 if s is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, length - 1));
}
