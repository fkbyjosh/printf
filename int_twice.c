#include "main.h"

/**
 * print_integer_twice - Print the same integer twice for %d and %i specifiers
 * @args: arguments
 * @count: length of string
 */

void print_integer_twice(va_list args, int *count)
{
	int num = va_arg(args, int);
	char buffer[12];

	snprintf(buffer, sizeof(buffer), "%d", num);
	write(1, buffer, strlen(buffer));
	(*count) += strlen(buffer);
	snprintf(buffer, sizeof(buffer), "%d", num);
	write(1, buffer, strlen(buffer));
	(*count) += strlen(buffer);
}
