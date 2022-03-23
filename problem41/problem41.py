import math

def is_prime(n):
    for i in range(2, 1 + math.floor(math.sqrt(n))):
        if n % i == 0:
            return False
    return True

def permutations(s, l, r, lst):
    if l == r:
        lst.append(''.join(s))
    else:
        for i in range(l, r + 1):
            s[l], s[i] = s[i], s[l]
            permutations(s, l + 1, r, lst)
            s[l], s[i] = s[i], s[l]

pandigitals = []
curr_str = ""
result = 0

for i in range(1, 10):
    curr_str += str(i)
    permutations(list(curr_str), 0, len(curr_str) - 1, pandigitals)
    for i in reversed(pandigitals):
        i_int = int(i)
        if is_prime(i_int):
            if i_int > result:
                result = i_int

print(result)
