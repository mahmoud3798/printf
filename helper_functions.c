#include "main.h"

/**
 * _putchar - writes a character to standard output
 * @c: the character to write
 *
 * Return: On success, return 1. On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - prints a single character to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_char(va_list args, int count)
{
	char c = va_arg(args, int);

	_putchar(c);
	count++;
	return (count);
}
