#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: the number of characters written (1) or -1 on failure
 */
static int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1) == 1 ? 1 : -1);
}

/**
 * _printf - produces output according to a format
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					printed += _putchar(va_arg(args, int));
					break;
				case 's':
					printed += write(STDOUT_FILENO, va_arg(args, char *), 0);
					break;
				case '%':
					printed += _putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed += 2;
					break;
			}
		}
		else
		{
			printed += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (printed);
}

