def factorial(n):
    i = 1;
    for x in range(1, n + 1):
        i *= x
    return i

max_val = 1000000
i = 3 
result = 0
while i < max_val:
    val_str = str(i)
    sum_fac = 0
    for c in val_str:
        sum_fac += factorial(ord(c) - 48)
   
    if sum_fac == i:
        result += i

    i += 1

print(result)
