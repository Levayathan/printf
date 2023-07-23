#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to print
 *
 * Return: void
 */

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - Writes The character c to standard output
 * @c: The character to be written
 *
 * Return: 1 if succesful.
 * if error, -1 is returned.
 */

int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (i >= OUTPUT_BUF_SIZE || c == BUF_FLUSH)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
