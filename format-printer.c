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
	char *s;
	long int c, d, i, u, b, o, x, X;

	switch (k[*ind])
	{
	case 'c':
		c = va_arg(arg, int);
		_putchar(c);
		counter++;
		break;

	case 's':
		s = va_arg(arg, char *);
		if (s == NULL)
			s = "(null)";
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
	case 'b':
		b = va_arg(arg, long int);
		counter += arrayprinter(base_converter(b, 2));
		break;
	case '%':
		counter += _putchar('%');
		break;
	case 'u':
		u = va_arg(arg, long int);
		counter += arrayprinter(base_converter(u, 'u'));
		break;
	case 'o':
		o = va_arg(arg, long int);
		counter += arrayprinter(base_converter(o, 8));
		break;
	case 'x':
		x = va_arg(arg, long int);
		counter += arrayprinter(base_converter(x, 'x'));
		break;
	case 'X':
		X = va_arg(arg, long int);
		counter += arrayprinter(base_converter(X, 16));
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
