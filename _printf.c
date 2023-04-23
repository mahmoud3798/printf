#include "main.h"
/**
* _putchar - function to print character
* @c: char variable
* Return: integer
*/
int _putchar(char c)
{
	return (putchar(c));
}
/**
* _printf - function works as printf
* @format: char pointer
* @...: pointer
* Return: integer
*/
int _printf(const char *format, ...)
{
	va_list args;
	int num_chars_printed = 0;
	char c, *s;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = (char) va_arg(args, int);
				_putchar(c);
				num_chars_printed++;
			}
			else if (*format == 's')
			{
				*s = va_arg(args, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					num_chars_printed++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				num_chars_printed++;
			}
			else
			{
				_putchar(*format);
				num_chars_printed++;
			}
		}
		else
		{
			_putchar(*format);
			num_chars_printed++;
		}
		format++;
	}
	va_end(args);
	return (num_chars_printed);
}
