#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * name of file: variadic_functions.h
 * Desc: contains protoypes of functions 0x10
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
