import math

def d(n):
    x = 0
    for i in range(1, n):
        if n % i == 0:
            x += i
    return x

result = 0

for i in range(1, 10000):
    j = d(i)
    k = d(j)
    if k == i and j != i: 
        result += k + j

print(math.floor(result / 2))
