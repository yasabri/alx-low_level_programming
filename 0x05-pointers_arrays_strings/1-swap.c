#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* @a: the first int
* @b: the second int
* Return = 0 successfully
*/
void swap_int(int *a, int *b)
{
		int x;

		x = *a;
		*a = *b;
		*b = x;
}
