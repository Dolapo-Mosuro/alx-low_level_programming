#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');

return (0);
}
