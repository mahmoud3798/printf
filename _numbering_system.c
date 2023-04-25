#include "main.h"
/**
 * print_unsigned - prints an unsigned integer to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_unsigned(va_list args, int count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[40];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}
	while (num != 0)
	{
		buffer[i] = "0123456789"[num % 10];
		num /= 10;
		i++;
	}
	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}

/**
 * print_octal - prints an unsigned integer in octal format to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_octal(va_list args, int count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[40];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}
	while (num != 0)
	{
		buffer[i] = "01234567"[num % 8];
		num /= 8;
		i++;
	}
	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}

/**
 * print_hex - prints an unsigned integer in
*	hexadecimal format to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 * @uppercase: a flag indicating whether to use uppercase letters
 *
 * Return: The updated count of characters printed.
 */
int print_hex(va_list args, int count, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[40];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}
	while (num != 0)
	{
		int digit = num % 16;

		if (digit < 10)
			buffer[i] = digit + '0';
		else if (uppercase)
			buffer[i] = digit - 10 + 'A';
		else
			buffer[i] = digit - 10 + 'a';

		num /= 16;
		i++;
	}

	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}

/**
 * print_hex_upper - prints an unsigned integer in
 *	uppercase hexadecimal format to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_hex_upper(va_list args, int count)
{
	return (print_hex(args, count, 1));
}

/**
 * print_hex_lower - prints an unsigned integer in
 *	lowercase hexadecimal format to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_hex_lower(va_list args, int count)
{
	return (print_hex(args, count, 0));
}
