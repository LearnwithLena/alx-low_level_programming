#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - prints an int
 * @i: int to print
 * Return: void
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_char - prints a char
 * @c: char to print
 * Return: void
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_float - prints a float
 * @f: float
 * Return: void
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}


/**
 * print_string - prints a string
 * @s: string
 * Return: void
 */

void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}

/**
 * print_all - prints anything followed by a new line
 * @format: list of arguments passed to the function
 * Return: void
 *	ignore an non char, int, string(char *) and float type
 *	print nil, if any string argument is NULL
 */

void print_all(const char * const format, ...)
{
	unsigned int j, i;
	va_list ap;
	char *separator = "";

	print_t struc[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (struc[j].type != NULL)
		{
			if (*(struc[j].type) == format[i])
			{
				printf("%s", separator);
				struc[j].func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);

	printf("\n");
}
