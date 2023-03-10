#include "main.h"
int _find_sqrt(int n, int root);


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 *
 * Return: the natural square root of @n, or -1 if not exist.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_find_sqrt(n, root));
}

/**
 * _find_sqrt - finds the sqrt of a number.
 * @n: number to find sqrt of.
 * @root: root to be checked.
 *
 * Return: value of root if @n has natural number, or -1 if not.
 */
int _find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (n < root * 2)
		return (-1);
	return (_find_sqrt(n, root + 1));
}
