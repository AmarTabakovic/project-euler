import math
import sys

def pentagonal(n):
    return math.floor(n * (3 * n - 1) / 2)

def hexagonal(n):
    return math.floor(n * (2 * n - 1))

i = 0
counter = 0
solution = 0
while counter < 2:
    j = math.floor(i * 0.8) # Pure guesswork
    can_continue = False
    x = pentagonal(i)
    while j < i and not can_continue:
        if x == hexagonal(j):
            solution = x
            counter += 1
            can_continue = True
        j += 1
    i += 1

print(solution)
