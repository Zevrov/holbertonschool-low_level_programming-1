#!/usr/bin/python3
"""this is a file for island perimeter"""


def island_perimeter(grid):
    """This is finds the peremeter of the island
    Args:
        grid: input gird of the map in matrix
    Returns:
        return the peremeter length
    """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                perimeter += 4
                if y > 0 and grid[y - 1][x] == 1:
                    perimeter -= 2
                if x > 0 and grid[y][x - 1] == 1:
                    perimeter -= 2
    return perimeter
