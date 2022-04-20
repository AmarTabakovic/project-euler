import math

def is_prime(n):
    if n == 1:
        return False
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

count = 0
result = 0
n = 11 
while count < 11:
    if is_prime(n):
        p1 = [ch for ch in str(n)]
        p2 = [ch for ch in str(n)]
        addable = True
        l = ""
        r = "" 
        for i in range(len(str(n))):
            l = p1.pop() + l
            r += p2.pop(0)
            if not is_prime(int(l)) or not is_prime(int(r)):
                addable = False
                break
        if addable:
            result += n
            count += 1
    n += 1

print(result) 
