#include "main.h"

/**
 * swap_int - swap the values o two intigers
 *
 * @a - intiger to be swaped
 * @b - intiger to be swaped
 *
 * Return: Always (0);
 */

void swap_int(int *a, int *b);
{
	int *a = 98;
	int *b = 42;

	printf("a= %d and b= %d", *a, *b);
	swap_int(&a, &b);
	printf("a= %d and b= %d", *a, *b);

	return (0);
}
