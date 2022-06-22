#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: the string to reverse
 *
 * Return: Nothing.
 */

void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
