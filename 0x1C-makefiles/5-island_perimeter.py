#!/usr/bin/python3
""" 5-island_perimeter.py"""


def island_perimeter(grid):
    """ grid """

    h = len(grid) - 1
    w = len(grid[0]) - 1
    p, i = 0, 0

    while i <= h:
        j = 0
        while j <= w:
            if grid[i][j] == 1:
                if j == w or grid[i][j + 1] == 0:
                    p += 1

                if grid[i][j - 1] == 0 or j == 0:
                    p += 1

                if i == h or grid[i + 1][j] == 0:
                    p += 1

                if grid[i - 1][j] == 0 or i == 0:
                    p += 1

            j += 1

        i += 1

    return p
