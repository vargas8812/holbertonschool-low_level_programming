#include <stdio.h>
/**
 * main - main Prints the alpha in lowercase
 *
 * Return: returns to 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}

