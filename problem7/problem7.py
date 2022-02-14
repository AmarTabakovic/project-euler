def is_prime(n: int):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

count = 0
current = 2
searched_prime = 2
goal = 10001

while True:
    if count == goal:
        break
    if is_prime(current):
        searched_prime = current
        count += 1
    current += 1

print(searched_prime)

