#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args, int count);
int print_char(va_list args, int count);
int print_percent(int count);
int print_int(va_list args);
int print_binary(va_list args, int count);
int print_n(va_list args);
int print_integer(va_list args, int count);
int print_number(int n);
int print_unsign(va_list args, int count);
int print_octal(va_list args, int count);
int print_hex(va_list args, int count, int uppercase);
int print_hex_upper(va_list args, int count);
int print_hex_lower(va_list args, int count);
int choice(const char *format, va_list args, int count);


#endif
