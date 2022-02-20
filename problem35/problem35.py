import math

def is_prime(n):
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

result = 0
max_prime = 2
i = 2 
while max_prime < 1000000:
    if is_prime(i):
        max_prime = i
        is_circular = True
        i_str = str(i)
        for _ in range(len(i_str)):
            i_str = i_str[1:] + i_str[:1]
            if not is_prime(int(i_str)):
                is_circular = False
        if is_circular:
            result += 1
    i += 1

print(result)

