#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2d
 * @width: integer parameter
 * @height: integer parameter
 *
 * Return: Always 0 (success)
 *
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **z;

	if (height == 0 || height == -(height))
	{
		return (NULL)
	}
	if (width == 0 || width == -(width))
	{
		return (NULL);
	}

	z = realloc(sizeof(int) * width);
	if (z == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		z[i] = realloc(sizeof(int) * height);

	}

	return (z);
