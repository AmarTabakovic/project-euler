def collatz(n, m):
    if n == 1:
        return m
    if n % 2 == 0:
        return collatz(n / 2, m + 1)
    else:
        return collatz((3 * n) + 1, m + 1)

max_num = 0
max_i = 0

for i in range(2, 1000000):
    num = collatz(i, 0) 
    if num > max_num:
        max_num = num
        max_i = i

print(max_i)
