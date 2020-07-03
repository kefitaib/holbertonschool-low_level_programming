#!/usr/bin/python3
""" 5-island_perimeter.py"""


def island_perimeter(grid):
    """ grid """

    h = len(grid) - 1
    w = len(grid[0]) - 1
    i, j = 1, 1
    p = 0

    while i != h:
        j = 1
        while j != w:
            if grid[i][j] == 1:
                if grid[i][j + 1] == 0:
                    p += 1

                if grid[i][j - 1] == 0:
                    p += 1

                if grid[i + 1][j] == 0:
                    p += 1

                if grid[i - 1][j] == 0:
                    p += 1
            else:
                break

            j += 1

        i += 1

    return p
