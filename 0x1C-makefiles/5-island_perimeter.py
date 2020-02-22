#!/usr/bin/python3
""" Program that gets the perimeter of the island """
def island_perimeter(grid):
    """ returns the perimeter"""
    per = 0
    srow = len(grid)
    for row in range(srow):
        scol = len(grid[row])
        for col in range(scol):
            if grid[row][col] == 1:
                if (row == 0 or (grid[row - 1][col] != 1)):
                    per += 1
                if (row == (srow - 1) or (row < srow - 1 and
                                          grid[row + 1][col] != 1)):
                    per += 1
                if (col == 0 or (grid[row][col - 1] != 1)):
                    per += 1
                if (col == (scol - 1) or (col < scol - 1 and
                                          grid[row][col + 1] != 1)):
                    per += 1
    return (per)
