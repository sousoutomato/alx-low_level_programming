#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 *
 * Description: 'the program's description'
 * @n: describe the parameter
 * @a: description
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
