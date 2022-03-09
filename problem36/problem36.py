import math

def is_palindrome(str):
    x = len(str) - 1
    for i in range(0, math.floor(len(str) / 2)):
        if str[i] != str[x]:
            return False
        x -= 1
    return True


i = 0
result = 0

while i < 1000000:
    i_str = str(i)
    i_str_bin = str(bin(i))
    i_str_bin = i_str_bin[2:len(i_str_bin)]

    if is_palindrome(i_str) and is_palindrome(i_str_bin):
        result += i

    i += 1    

print(result)
