#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @fmt_arg: Formatted string in which to print the arguments.
 * @a: List of arguments to be printed.
 * @list_arg: list of arguments.
 * Return: width.
 */
int get_width(const char *fmt_arg, int *a, va_list list)
{
	int curr_a;
	int width = 0;

	for (curr_a = *a + 1; fmt_arg[curr_a] != '\0'; curr_a++)
	{
		if (is_digit(fmt_arg[curr_a]))
		{
			width *= 10;
			width += fmt_arg[curr_a] - '0';
		}
		else if (fmt_arg[curr_a] == '*')
		{
			curr_a++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*a = curr_a - 1;

	return (width);
}
