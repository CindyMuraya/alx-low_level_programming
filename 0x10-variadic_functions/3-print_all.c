#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_char - display character
 * @arg: arguments
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - display the value of an integer variable
 * @arg: arguments
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - display the value of float variable
 * @arg: argument
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - display the value of a string variable
 * @arg: argument
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"d", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
