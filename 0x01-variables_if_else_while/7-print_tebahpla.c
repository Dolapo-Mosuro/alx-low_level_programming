#include <stdio.h>

/**
 *main - prints lowercase in reverse,
 *followed by a new line
 *Return 0 always
 */
int main(void)
{

char xx;
for (xx = 'z'; xx >= 'a'; xx--)
{
putchar(xx);
}
putchar('\n');
return (0);
}
