#!/usr/bin/python3
"""Module to define a function island_perimeter."""


def island_perimeter(grid):
    """Calculate the perimeter of an island represented in a grid.

    The grid is a list of lists of integers:
    
    Args:
        grid (list[list[int]]): 2D grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    if not grid:
        return 0
    
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter

