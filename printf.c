#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * convert - converts int to appropiate base
 * @num: int to be converted
 * @base: base to be converted into
 * Return: pointer to converted int
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static const char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * _printf - Our implementation of the printf function
 * @format: string to be printed, plus specifiers
 *
 * Return: count of chars printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	char c;
	const char *str;
	va_list arg;

	va_start(arg, format);
	for (str = format; *str != '\0'; str++)
	{
		if (*str == '%')
		{
			str++;
			switch (*str)
			{
				case 'c':
					c = (char)va_arg(arg, int);
					_putchar(c);
					count++;
					break;
				case 's':
					count += _puts(va_arg(arg, char*));
					break;
				case 'd': case 'i':
					i = va_arg(arg, int);
					if (i < 0)
					{
						i = -i;
						_putchar('-');
						count++;
					}
					count += _puts(convert(i, 10));
					break;
				case '%':
					_putchar('%');
					count++;
					break;
			}
		}
		else
		{
			_putchar(*str);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
