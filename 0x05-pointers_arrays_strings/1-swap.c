#include "main.h"

/**
 * swap_int - Takes a pointer and swaps its value with
 *               another pointer.
 * @a,b: The pointers to be swapped.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;


}
