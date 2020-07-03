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
                if p == 0:
                    p = 4
                else:
                    p += 2

            if grid[i][j + 1] != 1:
                break

            j += 1

        i += 1

    return p
