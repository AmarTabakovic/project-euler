def is_palindrome(x):
    j = len(x) - 1
    for i in range(len(x)):
        if x[i] != x[j]:
            return False
        j -= 1
    return True

largest = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        if is_palindrome(str(i * j)):
            if i * j > largest:
                largest = i * j

print(largest)
