import math

def is_prime(n):
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

sum_primes = 0
biggest_prime = 2
i = 2

while biggest_prime < 2000000: 
    if is_prime(i):
        sum_primes += i
        biggest_prime = i
    i += 1

print(sum_primes - biggest_prime)
