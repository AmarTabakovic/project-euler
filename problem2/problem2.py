result = 0
a = 1
b = 1
while a <= 4000000: 
    if a % 2 == 0:
        result += a
    a, b = b, a + b

print(result)
