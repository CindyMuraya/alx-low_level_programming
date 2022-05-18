#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/*
 * Description: header file containing the prototypes of all your functions
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - defines a printer
 * @symbol: data type
 * @print: function pointer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

#endif
