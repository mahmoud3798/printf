#include "main.h"

/**
 * print_string - prints a string to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_string(va_list args, int count)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
/**
 * print_percent - prints a literal % character to standard output
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_percent(int count)
{
	_putchar('%');
	count++;
	return (count);
}

/**
 * _printf - prints formatted output to standard output
 * @format: the format string
 * @...: variable arguments to be formatted
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count = print_char(args, count);
			else if (*format == 's')
				count = print_string(args, count);
			else if (*format == '%')
				count = print_percent(count);
			else if (*format == 'd' || *format == 'i')
				count = print_integer(args, count);
			else if (*format == 'b')
				count = print_binary(args, count);
			else if (*format == 'u')
				count = print_unsign(args, count);
			else if (*format == 'o')
				count = print_octal(args, count);
			else if (*format == 'X')
				count = print_hex_upper(args, count);
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
