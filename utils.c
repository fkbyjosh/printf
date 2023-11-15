#include "main.h"

/**
 * ch_printable - Evaluates if a char is printable
 * @ch: Char to be evaluated.
 * Return: 1 if ch is printable, 0 otherwise
 */
int ch_printable(char ch)
{
	if (ch >= 32 && ch < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @ind_app: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int ind_app)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[ind_app++] = '\\';
	buffer[ind_app++] = 'x';

	buffer[ind_app++] = map_to[ascii_code / 16];
	buffer[ind_app] = map_to[ascii_code % 16];

	return (3);
}

/**
 * veri_digit - Verifies if a char is a digit
 * @ch: Char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */
int veri_digit(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);

	return (0);
}

/**
 * cast_number - Casticates a number to the specified size
 * @c_num: Number to be casted.
 * @size: Number indicating the type to be casted.
 * Return: Casted value of num
 */
long int cast_number(long int c_num, int size)
{
	if (size == S_LONG)
		return (c_num);
	else if (size == S_SHORT)
		return ((short)c_num);

	return ((int)c_num);
}

/**
 * cast_unsgnd_num - Casticates a number to the specified size
 * @c_num: Number to be casted
 * @size: Number indicating the type to be casted
 * Return: Casted value of num
 */
long int cast_unsgnd_num(unsigned long int c_num, int size)
{
	if (size == S_LONG)
		return (c_num);
	else if (size == S_SHORT)
		return ((unsigned short)c_num);

	return ((unsigned int)c_num);
}
