#!/usr/bin/python3
"""Function that returns the perimeter of an island """


def island_perimeter(grid):
    """Function that returns the perimeter
        of an island described in grid """

    perimeter, tmp, num_1, index, size = 0, 0, 0, 0, 0
    for row in grid:
        num_1 = row.count(1)
        if num_1 > 0:
            perimeter += 2
            index = row.index(1) + 2
            if num_1 > 1:
                size = len(row) - 1
                for i in range(index, size):
                    if row[i] == 1 and row[i - 1] == 0:
                        perimeter += 2
        answer = abs(num_1 - tmp)
        perimeter += answer
        tmp = num_1
    return perimeter
