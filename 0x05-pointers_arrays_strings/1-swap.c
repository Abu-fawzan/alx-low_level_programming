#include "main.h"
/**
 * swap_int - swap two integers
 * @a: integer a
 * @b: integer b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int q;

q = *a;
*a = *b;
*b = q;
}
