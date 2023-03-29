#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - a function that selects the correct function to
 * perform the operation asked by the user.
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{