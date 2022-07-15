#!/usr/bin/python3
"""Function that returns the perimeter of an island """


def island_perimeter(grid):
    """Function that returns the perimeter
        of an island described in grid """

    perimeter, tmp, num_1, index = 0, 0, 0, 0
    for row in grid:
        num_1 = row.count(1)
        if num_1 > 0:
            perimeter += 2
            index = row.index(1)
            if num_1 > 1 and row[index + 1] != 1:
                perimeter += 2
        if num_1 > tmp:
            answer = num_1 - tmp
            perimeter += answer
        tmp = num_1

    grd_size = len(grid) - 2
    perimeter += grid[grd_size].count(1)
    return perimeter
