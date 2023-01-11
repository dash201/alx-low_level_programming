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
	int len;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = sizeof(int *) * width + sizeof(int) * height * width;
	arr = (int **)malloc(len);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		arr[i] = (int *)(arr + width) + (height * i);
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
