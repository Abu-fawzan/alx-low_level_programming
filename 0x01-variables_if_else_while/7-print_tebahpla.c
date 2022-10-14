#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point>
 * Lowercase alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
