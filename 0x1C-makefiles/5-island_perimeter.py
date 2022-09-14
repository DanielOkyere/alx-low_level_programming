#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    Determines the perimeter of island
    0- represents water zone
    1- represents a land zone
    One cell is a square with side 1
    Grid cells are connected horizontally/vertically(not diagonally)
    Grid rectangular width and height dont exceed 100
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += 4
                if j > 0 and grid[i][j - 1]:
                    perimeter -= 2
                if i > 0 and grid[i - 1][j]:
                    perimeter -= 2

    return perimeter
