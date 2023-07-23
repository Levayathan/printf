#include "main.h"

/**
 * get_precision - gets the precision character from the format string
 * @p: The format string
 * @params: The parameters struct
 * @ap: The argument pointer
 *
 * Return: The value of the format string
 */

char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	is (*p != '.')
		return (p);
	p++;
	if (*p == '=')
	{
		d =va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
}
