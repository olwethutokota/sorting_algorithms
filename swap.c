#include <stdio.h>
#include "sort.h"

/**
 * swap - ...
 *
 * @a: ....
 * @b:
 * Return...
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
