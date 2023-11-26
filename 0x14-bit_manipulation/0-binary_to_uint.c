#include "main.h"

/**
 *main- binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
int i;
 unsigned int dec_var,
dec_var = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_var = 2 * dec_var + (b[i] - '0');
}

return (dec_var);
}
