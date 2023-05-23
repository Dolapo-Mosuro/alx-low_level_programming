#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */


char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;

/*find size of dest array*/
while (dest[c])
c++;

/**
 * src does not need to be null terminated
 * if it contains n or more bytes
 */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];
/*null terminate dest*/
dest[c + i] = '\0';

return (dest);
}
