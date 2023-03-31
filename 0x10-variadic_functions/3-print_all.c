#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_char - Prints a char.
 * @args: A list of arguments pointing to the character to be printed.
 */
void print_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @args: A list of arguments pointing to the integer to be printed.
 */
void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @args: A list of arguments pointing to the float to be printed.
 */
void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @args: A list of arguments pointing to the string to be printed.
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function that prints anything, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * @...: A variable number of arguments to be printed.
 * Description: Any argument not of type char, int, float,or char* is ignored.
 * If a string argument is NULL, (nil) is printed instead.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list args;
	printer_t funcs[] = {
		{"c", print_char}, {"i", print_int},
		{"f", print_float}, {"s", print_string}
	};

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		j = 0;

		while (j < 4 && (format[i] != *(funcs[j].symbol))) /*check again*/
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ",";
		}
	}
	printf("\n");
	va_end(args);
}
