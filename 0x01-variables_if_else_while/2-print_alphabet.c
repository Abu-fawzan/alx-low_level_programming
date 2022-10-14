#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * prints alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
