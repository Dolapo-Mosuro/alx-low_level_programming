#include <stdlib.h>
#include "main.h"



/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr_x;
ptr_x = malloc(b);
if (ptr_x == NULL)
exit(98);
return (ptr_x);
}
