#include "main.h"

/**
 * swap_int - Takes a pointer and swaps its value with
 *               another pointer.
 * @a: first pointer to be swapped.
 * @b: second pointer to be swapped.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;


}
