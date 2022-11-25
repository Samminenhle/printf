#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: the character to print
 *
 * Return: 1 on success
 * otherwise -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
