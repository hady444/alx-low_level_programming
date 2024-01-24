#!/usr/bin/python3
"""Module"""


def island_perimeter(grid):
    """
    Function to get the perimeter of the island described in grid.

    Attributes:
        grid:  is a list of list of integers
    Return: perimeter of the island
    """
    max_rows = 0
    found = 0
    for row in grid:
        rr = row.count(1)
        if rr > 0:
            found += 1
        if max_rows < rr:
            max_rows = rr
    if max_rows == 1 or found == 1:
        return 1
    return ((max_rows + found) * 2)
