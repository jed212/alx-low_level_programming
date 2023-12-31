#!/usr/bin/python3


def island_perimeter(grid):
    """
    Defines a function that returns the perimeter of an island
    """
    column = len(grid[0])
    row = len(grid)
    edges = 0
    size = 0

    for i in range(row):
        for j in range(column):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
