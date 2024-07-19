#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    per = 0
    for row in grid:
        for col in row:
            if col == 1:
                if per == 0:
                    per += 4
                else:
                    per += 3
    return per
