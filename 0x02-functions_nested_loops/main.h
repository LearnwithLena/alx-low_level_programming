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

