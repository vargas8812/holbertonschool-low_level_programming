#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Desc of value
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar('0' + x);
}
for (x = 0; x < 6; x++)
{
putchar('a' + x);
}
putchar('\n');
return (0);
}
