#include "main.h"

/**
 * _printf - prints anything formated, be it chars, integers etc.
 * @format: a string containing all the desired characters.
 * @...: variadic parameters.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_char},
		{"%", print_char},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
