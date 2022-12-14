#include <stdio.h>

/**
 *_putchar -writes the character c to stdout
 *c is the character to print
 *
 *Return: Always 1 (success)
 *Return -1 error
 */
int _putchar(char c);

/**
 *Prints lowercase alphabets
 */
void print_alphabet(void);

/**
 * Prints lowercase alphabets ten times
 */
void print_alphabet_x10(void);

/**
 * Checks if a character is lowercase
 */
int _islower(int c);

/**
 * Checks if a character is an alphabet
 */
int _isalpha(int c);

/**
 * Chekcs if a number is greater, equal or less than zero
 * Prints +, 0, - respectively
 */
int print_sign(int n);

/**
 * Converts a number to the absolute value
 */
int _abs(int num);

/**
 * Prints the last digit of a number by finding the modulsus by 10
 * Returns the last digit
 */
int print_last_digit(int num);

/**
 * Prints all the minute in a day starting with 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * Prints 9 times table with , and spaces and new lines after each level
 */
void times_table(void);

/**
 * Prints the sum of two numbers
 */
int add(int a, int b);

/* Prints to 98 */
void print_to_98(int n);

/**
 * Print times table to 15
 */
void print_times_table(int n);
