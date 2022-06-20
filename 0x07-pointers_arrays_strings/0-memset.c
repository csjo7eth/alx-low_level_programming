#include "main.h"

/**
 * _memset - fill mimory with constant byte
 *
 * @s - pointer to the memory
 * @n - byte of memory
 * @b - constant byte
 *
 * Return: the memory area of s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}return (s);
}
