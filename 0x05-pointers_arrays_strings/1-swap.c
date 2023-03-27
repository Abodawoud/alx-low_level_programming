#include "main.h"
/**
 *swap_int - swap a to b
 *@a: pointer to first num
 *@b: pointer to second num
 *Return : swaped numbers
 */
void swap_int(int *a, int *b)
{
	int swapping;

	swapping = *a;
	*a = *b;
	*b = swapping;
}
