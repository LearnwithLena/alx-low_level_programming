#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * struct print - struct to print all characters
 * @type: indicates the data type
 * @func: function pointer to function to print data type
 */

typedef struct print
{
	char *type;
	void (*func)(va_list arg);
} print_t;

int _putchar(char);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);

#endif /*_VARIADIC_FUNCTIONS_H_ */
