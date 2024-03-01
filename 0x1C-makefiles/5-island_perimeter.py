#!/usr/bin/python3
"""Creates a function measuring the perimeter of the island described"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Args:
        grid: a list of integers.
    Returns:
        int: the perimeter of the island described in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                perimeter += 4

                if (x > 0 and grid[x - 1][y] == 1):
                    perimeter -= 2
                if (x > 0 and grid[x][y - 1] == 1):
                    perimeter -= 2
    return perimeter
