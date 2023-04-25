#include "main.h"

/**
 * print_integer - prints an integer to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_integer(va_list args, int count)
{
	int num = va_arg(args, int);

	count += print_number(num);
	return (count);
}

/**
 * print_number - prints a number to standard output
 * @n: the number to print
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num = n;

	if (num / 10)
		count += print_number(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
