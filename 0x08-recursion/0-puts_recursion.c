#include "main.h"
/**
 * _puts_recursion - a function which prints string
 *
 * @s - a pointer of string
 *
 *Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	
	return;
}
