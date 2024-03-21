#!/usr/bin/python3
"""Module for figuring out an island's perimeter within a grid"""

def num_water_neighbors(grid, i, j):

    """gives back how many water neighbors a grid cell has."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):

    """returns the island's perimeter in a grid format."""

    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perim += num_water_neighbors(grid, i, j)

    return perim
