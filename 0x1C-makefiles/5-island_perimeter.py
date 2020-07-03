#!/usr/bin/python3
""" 5-island_perimeter.py"""


def island_perimeter(grid):
    """ grid """

    i = 1
    p = 0

    while i < len(grid) - 1:
        j = 1

        while j < len(grid[0]) - 1:
            if grid[i][j] == 1:
                if grid[i][j + 1] == 0:
                    p += 1

                if grid[i][j - 1] == 0:
                    p += 1

                if grid[i + 1][j] == 0:
                    p += 1

                if grid[i - 1][j] == 0:
                    p += 1

            j += 1

        i += 1

    return p
