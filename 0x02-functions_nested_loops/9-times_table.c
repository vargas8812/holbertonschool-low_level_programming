#include "main.h"
/*
*/
void times_table(void)
{

int x;
int y;
int z;
for (x = 0; x <= 9; x++)
{
_putchar('0');
for (y = 1; y <= 9; y++)
{
	z = x * y;
	_putchar(',');
	_putchar(' ');
	
}
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
_putchar('\n');
}
}
