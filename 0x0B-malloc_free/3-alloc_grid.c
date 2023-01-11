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
	int *ptr;
	int len;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = (sizeof(int *) * (width + 4)) * sizeof(int) * width * height;
	arr = (int **)malloc(len);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	ptr = (int *)(arr + width);
	for (i = 0; i < width; i++)
		arr[i] = (ptr + width * i);
	if (arr == NULL)
	{
		for (i = 0; i < width; i++)
			free(arr[i]);
		free(ptr);
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
