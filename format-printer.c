#include "main.h"

/**
 * format_printer - prints according to conversion specifier
 * @k: format specifier
 * @arg: array of arguments
 * @ind: index of char
 *
 * Description: ---
 * Return: returns the number of char printed
 */
int format_printer(const char *k, int *ind, va_list arg)
{
	int counter = 0, stray_len = 0;
	int c;
	char *s;
	int i;
	int d;

	switch (k[*ind])
	{
	case 'c':
		c = va_arg(arg, int);
		_putchar(c);
		counter++;
		break;

	case 's':
		s = va_arg(arg, char *);
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
			counter++;
		}

		break;
	case 'i':
		i = va_arg(arg, int);
		counter += arrayprinter(base_converter(i, 10));
		break;

	case 'd':
		d = va_arg(arg, int);
		counter += arrayprinter(base_converter(d, 10));
		break;
	case '%':
		counter += _putchar('%');
		break;
	case '\0':
		return (-1);
	default:
		stray_len += _putchar('%');
		stray_len += write(1, (&k[*ind]), 1);
		return (stray_len);
	}
	return (counter);
}
