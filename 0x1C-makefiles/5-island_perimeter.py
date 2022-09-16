#!/usr/bin/python3
"""
This module contains a function that returns
the perimeter of the island described in grid

"""


def island_perimeter(grid):
    """
    The function that returns the perimeter of the
    island described in grid
    Args:
        grid: the grid a matrix
    Returns:
         perimeter (int): perimeter of the island
    """
    m, n = len(grid), len(grid[0])
    land, nei = 0, 0
    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                land += 1
                if i < m - 1 and grid[i + 1][j] == 1:
                    nei += 1
                if j < n - 1 and grid[i][j + 1] == 1:
                    nei += 1
    return land * 4 - 2 * nei
