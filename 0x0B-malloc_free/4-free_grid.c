#include "main.h"
/**
 * free_grid -  function that free 2 dimensional grid
 *
 * @grid: integer pointer parameter
 * @height: integer parameter
 *
 * Return: Always 0 (success)
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; i++)
	{
		free(grid[f]);
	}
	free(grid);
}
