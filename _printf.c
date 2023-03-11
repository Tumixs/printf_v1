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
	int counter = 0, i, counter2;

	va_start(arg, format);
	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		while (format[i] != '%')
		{
			if (format[i] == '\0')
				return (counter);
			_putchar(format[i]);
			counter++;
			i++;
		}
		i++;

		counter2 = format_printer(format, &i, arg);
		if (counter2 == -1)
			return (-1);
		counter += counter2;
	}
	return (counter);
}
