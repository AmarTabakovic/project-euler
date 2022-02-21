import math

def triangle(n):
    return math.floor(0.5 * n * (n + 1))

file = open("words.txt", "r")
content = file.read()
words = content.split(",")
file.close()

result = 0

for word in words:
    word = word.strip('"')
    sum_word = 0
    for c in word:
        c_int = ord(c) - 64
        sum_word += c_int
    i = 1 
    n = 0 
    while n < sum_word:
        n = triangle(i)

        if sum_word == n:
            result += 1
        i += 1 

print(result)

