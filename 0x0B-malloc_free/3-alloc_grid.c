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

	z = calloc(height, sizeof(int *));
	if (z == NULL)
	{
		return (NULL);
		free(z);
	}

	for (i = 0; i < height; i++)
	{
		z[i] = calloc(width, sizeof(int));

		if (z[i] == NULL)
		{
			int x;

			for (x = 0; x < i; x++)
			{
				free(z[x]);
			}

			free(z);
			return (NULL);
		}

	}

	return (z);
}
