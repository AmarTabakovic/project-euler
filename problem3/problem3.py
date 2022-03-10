import math

def is_prime(n):
    for i in range(2, 1 +  math.floor(math.sqrt(n))):
        if n % i == 0:
            return False
    return True

n = 600851475143
biggest = 0
for i in range(2, 1 +  math.floor(math.sqrt(n))):
    if n % i == 0:
        if is_prime(i):
            if i > biggest:
                biggest = i

print(biggest)
