#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    per=0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if grid[i - 1][j] != 1:
                    per = per + 1
                if grid[i + 1][j] != 1:
                    per = per + 1
                if grid[i][j - 1] != 1:
                    per = per + 1
                if grid[i][j + 1] != 1:
                    per = per + 1
    return per
