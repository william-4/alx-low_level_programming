#!/usr/bin/python3
""" this module defies a function that returns perimeter """


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    Args:
        grid: list of list of integers, where
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if j <= 0 or not grid[i][j - 1]:
                    perimeter += 1
                if i <= 0 or not grid[i - 1][j]:
                    perimeter += 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    perimeter += 1
                if i >= len(grid) - 1 or not grid[i + 1][j]:
                    perimeter += 1

    return (perimeter)
