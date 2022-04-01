import math
import sys

def pentagonal(n):
    return math.floor(n * (3 * n - 1) / 2)

def hexagonal(n):
    return math.floor(n * (2 * n - 1))

pen_set = set()
hex_set = set()

for i in range(143, 1000000):
    hex_set.add(hexagonal(i))

for i in range(165, 1000000):
    pen_set.add(pentagonal(i))

intersect = hex_set.intersection(pen_set)
sol_list = list()

for i in intersect:
    sol_list.append(i)

solution = sol_list[1]

print(solution)
