#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: a charcter string
 * Return: 0 (succes)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
	{
		int c;

		if (*format == '%' && format++)
		{
			char *str;

			count = 0;

			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);

					count += write(1, &c, 1);
					break;
				case 's':
					str = va_arg(args, char*);
					count += write(1, str, strlen(str));
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				default:
					count += write(1, "%", 1);
					count += write(1, format, 1);
			}			break;
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
