#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ def """
    per = 0
    lake = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            lake = 0
            if grid[i][j] == 0:
                if grid[i - 1][j] != 0:
                    lake = lake + 1
                if grid[i + 1][j] != 0:
                    lake = lake + 1
                if grid[i][j - 1] != 0:
                    lake = lake + 1
                if grid[i][j + 1] != 0:
                    lake = lake + 1
            if grid[i][j] == 1 and lake != 4:
                if grid[i - 1][j] != 1:
                    per = per + 1
                if grid[i + 1][j] != 1:
                    per = per + 1
                if grid[i][j - 1] != 1:
                    per = per + 1
                if grid[i][j + 1] != 1:
                    per = per + 1
    return per
