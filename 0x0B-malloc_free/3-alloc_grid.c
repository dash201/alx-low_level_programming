#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: first parameter(raw)
 *@height: second parameter(column)
 *Return: a pointer or NULL
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc((width - 1) * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		arr[i] = (int *)malloc((height) * sizeof(int));
	if (arr == NULL)
	{
		for (i = 0; i < width; i++)
			free(arr[i]);
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
