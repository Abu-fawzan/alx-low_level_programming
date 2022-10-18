#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Two digits combination
 * Return: Always 0
 */
int main(void)
{
	int c, i;

	for (c = 48; c < 58; c++)
	{
		for (i = 48; i < 58; i++)
		{
			if (c != i && c < i)
			{
				putchar(c);
				putchar(i);
				if (i == 57 && c == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
