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

	if (height == 0 || height < 0)
	{
		return (NULL);
	}
	if (width == 0 || width < 0)
	{
		return (NULL);
	}

	z = calloc(width, sizeof(int));
	if (z == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		z[i] = calloc(height, sizeof(int));

		if (z[i] == NULL)
		{
			free(z[i]);
		}

	}

	return (z);
}
