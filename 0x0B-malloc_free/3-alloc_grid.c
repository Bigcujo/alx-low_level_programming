#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee1;
	int i, y;

	if (width <= 0 || height <= 0)
	return (NULL);
	mee1 = malloc(sizeof(int *) * height);
	if (mee1 == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	mee1[i] = malloc(sizeof(int) * width);
	if (mee1[i] == NULL)
	{
	for (; i >= 0; i--)
	free(mee1[i]);
	free(mee1);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (y = 0; y < width; y++)
	mee1[i][y] = 0;
	}
	return (mee1);
}
