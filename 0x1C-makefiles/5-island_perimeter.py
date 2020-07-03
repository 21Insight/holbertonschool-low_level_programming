#!/usr/bin/python3
"""That contains the island_perimeter function"""


def island_perimeter(grid):
    """That returns the perimeter of island described in grid"""
    p = 0

    nrows = len(grid)

    if grid != []:
        ncol = len(grid[0])

    for a in range(nrows):
        for b in range(ncol):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    p += 1
                if (a + 1) == nrows or grid[a + 1][b] == 0:
                    p += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    p += 1
                if (b + 1) == ncol or grid[a][b + 1] == 0:
                    p += 1

    return p
