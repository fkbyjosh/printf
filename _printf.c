#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a charcter string
 *
 * Return: 0 (succes)
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%' && format++)
			switch (*format)
			{
				case 'c':
					count += write(1, &va_arg(args, int), 1);
					break;
				case 's':
					count += write(1, va_arg(args, char*), strlen(va_arg(args, char*)));
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				default:
					count += write(1, "%", 1);
					count += write(1, format, 1);
					break;
			}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
