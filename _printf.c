#include "main.h"

/**
 * _printf - writes output to standard output stream
 * @format: charcter string
 *
 * Description:
 * Return: returns the number of characters printed,
 * excluding the null byte which ends output to strings
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int counter = 0;

	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; *format; format++)
	{
		while (*format != '%')
		{
			if (*format == '\0')
				return (counter);
			_putchar(*format);
			format++;
			counter++;
		}
		format++;
		counter += format_printer(*format, arg);
	}
	return (counter);
}

