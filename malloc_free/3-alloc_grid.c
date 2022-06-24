#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function
* @width: width  array
* @height: height  array
* Description: 2 dimensional array of integers should be initialized to 0
* Return: If width or height is 0 or negative, return NULL
*/
int **alloc_grid(int width, int height)
{
	int i, i2;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (!a)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (!a[i])
		{
			for (i2 = 0; i2 < i; i2++)
				free(a[i2]);
			free(a);
			return (NULL);
		}
		for (i2 = 0; i2 < width; i2++)
		{
			a[i][i2] = 0;
		}
	}
	return (a);
}
