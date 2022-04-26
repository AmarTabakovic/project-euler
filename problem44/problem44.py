def pentagonal(n):
    return n * ((3 * n) - 1) / 2

s = set()
for i in range(1, 5000):
    s.add(pentagonal(i))

min_v = 9999999999999
for i in s:
    for j in s:
        x = abs(j - i)
        if (j - i) in s and (i + j) in s and x < min_v : 
            min_v = x 

print(int(min_v))
