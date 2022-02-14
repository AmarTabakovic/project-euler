def fib(n):
    if n == 1 or n == 0:
        return n
    return fib(n - 1) + fib(n - 2)

result = 0
max_val = 4000000
temp = 0
i = 0
while temp <= max_val:
    temp = fib(i)
    if temp % 2 == 0:
        result += temp
    i += 1

print(result)
